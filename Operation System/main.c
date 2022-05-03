#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int memory[1024];

int PSW;
int registers[4];
int ir;
int clock;
int pc;
int inx;

int buffer;

int left;
int len;
char buffer2[2048];
int idx;
int cc;



void input();
void LOADER();
void MEMORY();
void CPU();


int main() {
    for (int i = 0; i < 1024; ++i) {
        memory[i] = 0;
    }
    input();
    return 0;
}

void input() {
    int trace_switch;
    int dump_switch;
    int addr;
    int flag = 0;
    while (1) {
        idx = 0;

        if (!flag || buffer == 34) {
            fflush(stdout);
            scanf("%X", &buffer);
        }

        if (buffer == -1) {
            /**
             * flag to end the input.
             */
            break;
        }
        if (buffer > 1024 || buffer < 16) {
            /**
             * data??
             */
            buffer = 0;
            flag = 0;
            continue;
        }
        left = buffer * 2;
        flag = 0;
        while (left > 0) {
            fflush(stdout);
            scanf("%X", &len);
            if (len > 32 || len < 4) {
                flag = 1;
                buffer = len;
                break;
            }

            left -= len;
            scanf("%s", (buffer2 + idx));
            idx += len;
            //                        printf("%d %d %d  ", len, idx, left);
        }
        if (flag) {
            continue;
        }
        fflush(stdout);
        scanf("%X", &addr);
        fflush(stdout);
        scanf("%d", &trace_switch);
        fflush(stdout);
        scanf("%d", &dump_switch);

        LOADER(addr, trace_switch, dump_switch);
    }
}

int hex_to_num(char hex) {
    if (hex >= '0' && hex <= '9') {
        return hex - 48;
    } else if (hex >= 'A' && hex <= 'F') {
        return hex - 55;
    }
}

void LOADER(int starting_address, int trace_switch, int dump_switch) {
    for (int i = 0; i < buffer; ++i) {
        int num = (hex_to_num(buffer2[i * 2]) << 4) + hex_to_num(buffer2[i * 2 + 1]);
        //        printf("%X\n", num);
        MEMORY(2, starting_address + i, num);
    }
    if (dump_switch) {
        // If the dump switch is on, your program must print all memory content after the program termination in the following format.
        printf("Start\t00\t02\t04\t06\t08\t0A\t0C\t0E\n");
        for (int i = 0; i < 64; ++i) {
            printf("%04X\t", i * 16);
            for (int j = 0; j < 8; ++j) {
                printf("%02X%02X\t", memory[i * 16 + j * 2], memory[i * 16 + j * 2 + 1]);
            }
            printf("\n");
        }
    }
}


void MEMORY(int read_or_write, int address, int var) {
    /**
     * 1 for read
     * 2 for write
     */

    switch (read_or_write) {
        case 1:
            // read

            break;
        case 2:
            // write
            memory[address] = var;
            break;
    }
}

void CPU(int PC, int trace_switch, int dump_switch) {
    int flag=1;
    pc=PC;
    while (flag)
    {
        // FETCH 
        ir = memory[PC];
        pc++;
        clock=clock+2;

        // DECODE
        int class=ir&0xC000;        
        int opcode=ir&0x1F00;
        int opcode_2=ir&0x00FF;
        
        clock=clock+1;

        // EXECUTE
        if (opcode>27){
            flag=0;
            break;
        }
        switch (opcode)
        {
        case 0x0000:
            int rx=opcode_2&0xc0;
            if (class==1){
                int ry=opcode_2&0x30;
                registers[rx]=registers[ry];
            }
            if (class==2){
                int add=opcode_2&0x3F;
                registers[rx]=memory[add];
            }
            if (class==3){
                int add=opcode_2&0x3F;
                registers[rx]=memory[add+idx];
            }
            
            break;
        
        case 0x00001:
            int rx=opcode_2&0xc0;
            if (class==1){
                int ry=opcode_2&0x30;
                registers[ry]=registers[rx];
            }
            if (class==2){
                int add=opcode_2&0x3F;
                memory[add]=registers[rx];
            }
            if (class==3){
                int add=opcode_2&0x3F;
                memory[add+idx]=registers[rx];
            }
            
            break;
        case 0x00010:
            int rx=opcode_2&0xc0;
            if (class==1){
                int ry=opcode_2&0x30;
                registers[rx]=registers[ry];
            }
            if (class==2){
                int add=opcode_2&0x3F;
                registers[rx]=memory[add];
            }
            if (class==3){
                int add=opcode_2&0x3F;
                registers[rx]=memory[add+idx];
            }
            
            break;
        case 0x00100:
            int rx=opcode_2&0xc0;
            registers[rx]=-registers[rx];
            break;
        case 0x00101:
            int rx=opcode_2&0xc0;
            registers[rx]=registers[rx]<<1;
            break;
        case 0x00110:
            int rx=opcode_2&0xc0;
            registers[rx]=registers[rx]>>1;
            break;
        case 0x01000:
            if (class==1){
                int rx=opcode_2&0xc0;
                int ry=opcode_2&0x30;
                registers[rx]=ry+registers[rx];
            }
            if (class==2){
                int rx=opcode_2&0xc0;
                int ry=opcode_2&0x30;
                registers[rx]=registers[ry]+registers[rx];
            }
            if (class==3){
                int rx=opcode_2&0xc0;
                int ry=opcode_2&0x3f;
                registers[rx]=registers[rx]+memory[ry];
            }
            if (class==4){
                int rx=opcode_2&0xc0;
                int ry=opcode_2&0x3f;
                registers[rx]=registers[ry]+memory[rx+idx];
            }
            if (registers[rx]>0){
                cc=0;
            }
            else{
                if (registers[rx]=0){
                    cc=1;
                }
                else{
                    cc=2;
                }
            }
            break;
        case 0x01001:
            if (class==1){
                int rx=opcode_2&0xc0;
                int ry=opcode_2&0x30;
                registers[rx]=ry-registers[rx];
            }
            if (class==2){
                int rx=opcode_2&0xc0;
                int ry=opcode_2&0x30;
                registers[rx]=registers[ry]-registers[rx];
            }
            if (class==3){
                int rx=opcode_2&0xc0;
                int ry=opcode_2&0x3f;
                registers[rx]=registers[rx]-memory[ry];
            }
            if (class==4){
                int rx=opcode_2&0xc0;
                int ry=opcode_2&0x3f;
                registers[rx]=registers[ry]-memory[rx+idx];
            }
            if (registers[rx]>0){
                cc=0;
            }
            else{
                if (registers[rx]=0){
                    cc=1;
                }
                else{
                    cc=2;
                }
            }
            break;
        case 0x01010:
            if (class==1){
                int rx=opcode_2&0xc0;
                int ry=opcode_2&0x30;
                registers[rx]=ry&registers[rx];
            }
            if (class==2){
                int rx=opcode_2&0xc0;
                int ry=opcode_2&0x30;
                registers[rx]=registers[ry]&registers[rx];
            }
            if (class==3){
                int rx=opcode_2&0xc0;
                int ry=opcode_2&0x3f;
                registers[rx]=registers[rx]&memory[ry];
            }
            if (class==4){
                int rx=opcode_2&0xc0;
                int ry=opcode_2&0x3f;
                registers[rx]=registers[ry]&memory[rx+idx];
            }
            if (registers[rx]>0){
                cc=0;
            }
            else{
                if (registers[rx]=0){
                    cc=1;
                }
                else{
                    cc=2;
                }
            }
            break;
        case 0x01011:
            if (class==1){
                int rx=opcode_2&0xc0;
                int ry=opcode_2&0x30;
                registers[rx]=ry^registers[rx];
            }
            if (class==2){
                int rx=opcode_2&0xc0;
                int ry=opcode_2&0x30;
                registers[rx]=registers[ry]^registers[rx];
            }
            if (class==3){
                int rx=opcode_2&0xc0;
                int ry=opcode_2&0x3f;
                registers[rx]=registers[rx]^memory[ry];
            }
            if (class==4){
                int rx=opcode_2&0xc0;
                int ry=opcode_2&0x3f;
                registers[rx]=registers[ry]^memory[rx+idx];
            }
            if (registers[rx]>0){
                cc=0;
            }
            else{
                if (registers[rx]=0){
                    cc=1;
                }
                else{
                    cc=2;
                }
            }
            break;
        case 0x01100:
            if (class==1){
                int ry=opcode_2&0x30;
                pc=registers[ry];
            }
            else{
                int ry=opcode_2&0x3f;
                pc=memory[ry];
            }
            break;
        case 0x01101:
            if (class==1){
                int ry=opcode_2&0x30;
                if (cc==opcode_2&0xc0){
                    pc=registers[ry];
                }
                
            }
            else{
                int ry=opcode_2&0x3f;
                if (cc==opcode_2&0xc0){
                    pc=memory[ry];
                }
            }
            break;
        case 0x01110:
            if (class==1){
                int ry=opcode_2&0x30;
                if (cc!=opcode_2&0xc0){
                    pc=registers[ry];
                }
            }
            else{
                int ry=opcode_2&0x3f;
                if (cc!=opcode_2&0xc0){
                    pc=memory[ry];
                }
            }
            break;
        case 0x01111:
            if (class==1){
                int rx=opcode_2&0xc0;
                int ry=opcode_2&0x30;
                registers[rx]=pc;
                pc=registers[ry];
            }
            if (class==2){
                int rx=opcode_2&0xc0;
                int ry=opcode_2&0x3f;
                registers[rx]=pc;
                pc=memory[ry];
            }
            break;
        case 0x10000:
            if (class==0){
                int rx=opcode_2&0xc0;
                registers[rx]=0;
            }
            if (class==1){
                int rx=opcode_2&0xc0;
                memory[registers[rx]]=0;
            }
            if (class==2){
                int rx=opcode_2&0xfc;
                memory[registers[rx]]=0;
            }
            if (class==3){
                int rx=opcode_2&0xfc;
                memory[registers[rx]+idx]=0;
            }
            break;
        case 0x10001:
            if (class==0){
                int rx=opcode_2&0xc0;
                printf("%d",rx);
            }
            if (class==1){
                int rx=opcode_2&0xc0;
                printf("%d",registers[rx]);
            }
            if (class==2){
                int rx=opcode_2&0xfc;
                printf("%d",memory[rx]);
            }
            if (class==3){
                int rx=opcode_2&0xfc;
                printf("%d",memory[rx+idx]);
            }
            break;
        case 0x10100:
            pc+=2;
            break;
        case 0x10101:
            pc+=4;
            break;
        case 0x10110:
            flag=0;
            break;
        case 0x11000:
            if (class==0){
                int rx=opcode_2&0xc0;
                idx=registers[rx];
            }
            if (class==1){
                int rx=opcode_2&0xc0;
                idx=memory[registers[rx]];
            }
            if (class==2){
                int rx=opcode_2&0xfc;
                idx=memory[rx];
            }
            if (class==3){
                int rx=opcode_2&0xfc;
                idx=memory[rx+idx];
            }
            break;
        case 0x11001:
            if (class==0){
                int rx=opcode_2&0xc0;
                registers[rx]=idx;
            }
            if (class==1){
                int rx=opcode_2&0xc0;
                memory[registers[rx]]=idx;
            }
            if (class==2){
                int rx=opcode_2&0xfc;
                memory[rx]=idx;
            }
            if (class==3){
                int rx=opcode_2&0xfc;
                memory[rx+idx]=idx;
            }
            break;
        case 0x11010:
            if (class==0){
                int rx=opcode_2&0xc0;
                idx+=registers[rx];
            }
            if (class==1){
                int rx=opcode_2&0xc0;
                idx+=memory[registers[rx]];
            }
            if (class==2){
                int rx=opcode_2&0xfc;
                idx+=memory[rx];
            }
            if (class==3){
                int rx=opcode_2&0xfc;
                idx+=memory[rx+idx];
            }
            break;
        case 0x11011:
            if (class==0){
                int rx=opcode_2&0xc0;
                idx-=registers[rx];
            }
            if (class==1){
                int rx=opcode_2&0xc0;
                idx-=memory[registers[rx]];
            }
            if (class==2){
                int rx=opcode_2&0xfc;
                idx-=memory[rx];
            }
            if (class==3){
                int rx=opcode_2&0xfc;
                idx-=memory[rx+idx];
            }
            break;
        default:
            break;
        }
    }


}