#include<stdio.h>
#include<malloc.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 10
typedef struct queue
{
	int data[MAX_QUEUE_SIZE];
	int front;
	int rear;
}Queue;

Queue* Init_CirQueue()
{
	Queue* Q = (Queue*)malloc(sizeof(Queue));
	if (!Q)
		exit(0);
	Q->front = Q->rear = 0;
	return(Q);
}

bool IsEmpty_Queue(Queue* Q)
{
	if (Q->front == Q->rear)
		return 1;       
	return 0;
}

bool IsFull_Queue(Queue* Q)
{
	if ((Q->rear + 1) % MAX_QUEUE_SIZE == Q->front)	
		return 1;
	return 0;
}
int Size_Queue(Queue* Q)
{
	return (Q->rear + MAX_QUEUE_SIZE - Q->front) % MAX_QUEUE_SIZE;
}

bool Push(Queue* Q, int e)
{
	if (IsFull_Queue(Q))	
	{
		printf("Insert: The queue is full.\n");
		return 1;
	}
	Q->data[Q->rear] = e;   
	Q->rear = (Q->rear + 1) % MAX_QUEUE_SIZE;
	return 0;       
}

bool Pop(Queue* Q, int e)
{
	if (IsEmpty_Queue(Q))	
	{
		printf("The queue is empty.\n");
		return 1;       
	}
	e = Q->data[Q->rear];   
	Q->front = (Q->front + 1) % MAX_QUEUE_SIZE;   
	return 0;
}


 
 
 int main()
 {
	int N,M,a,b;
	while(scanf("%d %d",&N,&M))
	{
		
		int* Indegree = (int*)malloc(sizeof(int));
		for(int i = 0; i < N; i++)
		{
			Indegree[i] = 0;		
		}
		
		int(*graph)[2] = (int(*)[2])malloc(sizeof(int)*M*2);
	
		for(int i = 0; i<M; i++)
		{
			for(int j = 0; j < 2; j++)
			{
				graph[i][j] == 0;
	    	}
		}
	
		for(int i = 1; i <= M; i++)
		{
			scanf("%d %d",&a,&b);
			if(graph[a][b] == 0)
			{
				graph[a][b] = 1;
				Indegree[b]++;
			}
		}
	
		Queue* q = NULL;
		q = Init_CirQueue();
	
		for(int i = 0; i < N; i++)
		{
			if(Indegree[i] == 0)
			{	
				Push(q,i);
			}
		}
	
		while(!IsEmpty_Queue(q))
		{
			int v;
			Pop(q,v);
			printf("%d",v);
			for(int i = 1; i < N; i++)
			{
				if(graph[v][i])
				{
					Indegree[i]--;
					if(Indegree [i] == 0)
					{
						Push(q,i);
					}
				}
			}
		}
	
		for(int i = 0; i<Size_Queue(q) - 1;i++)
		{
			printf("%d ",q->data[i]);
		}
		printf("%d",q->data[Size_Queue(q)-1]);
	}
	return 0;
 }
