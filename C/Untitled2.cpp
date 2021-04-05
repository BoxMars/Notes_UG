#include<iostream>
#include<cstring>

using namespace std;


int *minus(int *a, int *b){
	
}

bool greater(int *a, int*b){
		
}

void div(int *a, int *b,){
	int len_a=0;
	int len_b=0;
	for(int i=99;i>=0;i--){
		if *(a+i)!=0{
			len_a=i+1
			break;
		}
	}
	
	for(int i=99;i>=0;i--){
		if *(b+i)!=0{
			len_b=i+1
			break;
		}
	}
	
	
	
}

int main(){
	
	int divisor[100];
	int dividend[100];
	
	
	int *p=divisor;
	int *q=dividend;
	
	char a[100];
	char b[100];
	
	cin.getline(a, 100);
	
	int len=strlen(a);
	
	for(int i=0;i<len;i++){
		*(p+i)=a[len-i-1]-'0';
	}
	
	for(int i=0;i<=len/2;i++){
		for(int j=1;j<10;j++){
			*(q+i)=j;
			
		}
	} 
	
	for(int i=0;i<len;i++){
		cout<<*(p+i)<<endl;
	}

	
	
	return 0;
	
	
	
	
}
