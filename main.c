#include<stdio.h>
struct proc
{
	int processid;
	int bursttime;
	int arrivaltime;
	int ct=0;
};

int main()
{
	int n;
	printf("enter how many process u want to enter\n");
	scanf("%d",&n);
	proc p[n];
	for(int i=0;i<n;i++)
	{
		printf("enter %d pocess id\n",i+1);
		scanf("%d",&p[i].processid);
		printf("enter arrival time\n");
		scanf("%d",&p[i].arrivaltime);
	}
	
	for(int i=0;i<n;i++)
	{
		p[i].bursttime=p[i].arrivaltime*2;
	}
	
	int k=1;
	for(int i=0;i<n;i++)
	{
	while(p[i].bursttime!=0)
	{
		k++;
		p[i].bursttime--;
		printf("%d",p[i].processid);
	}
	p[i].ct=k;
    }
    printf("\n");
    
    for(int i=0;i<n;i++)
    {
    printf("%d",p[i].ct);
    }
}

