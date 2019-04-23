#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct process
{
	char processid[10][10];
	int bursttime;
	int arrivaltime=0;
	int tat;
	int wt;
	int ct=0;
};

int main()
{
	int n;
	float avgtat=0,avgwt=0;
	printf("How many process do you want \n");
	scanf("%d",&n);
	process p[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter %d Process id\n",i+1);
		scanf("%s",&p[i].processid[i]);
		printf("Enter Arrival time\n");
		scanf("%d",&p[i].arrivaltime);
	}
	
	
	
	for(int i=0;i<n;i++)
	{
		p[i].bursttime=p[i].arrivaltime*2;
	}
	
	int k=1;
	for(int i=0;i<n;i++)
	{	
	int temp=p[i].bursttime;
	while(temp!=0)
	{
		k++;
		temp--;
	//	printf("%s\t",p[i].processid[i]);
	}
	
	p[i].ct=k;
    
	}
    printf("\n");
    
    for(int i=0;i<n;i++)
	{
		p[i].tat=p[i].ct-p[i].arrivaltime;
	}

    for(int i=0;i<n;i++)
     {
	 p[i].wt=p[i].tat-p[i].bursttime;
    }
    
    system("cls");
    printf("\n\n");
    
    printf("\t\t\t");
    for(int i=0;i<n;i++)
    {
    	printf("%s\t",p[i].processid[i]);
	}  
	printf("\n");
	printf("\n");
	
   printf("Arrival time is:\t");
    for(int i=0;i<n;i++)
    {
    	printf("%d\t",p[i].arrivaltime);
	} 
    printf("\n");
    
    printf("Burst time is:\t\t");
    for(int i=0;i<n;i++)
    {
    printf("%d\t",p[i].bursttime);
    }
    printf("\n");


	printf("Completion time is:\t");
    for(int i=0;i<n;i++)
    {
    printf("%d\t",p[i].ct);
    }
    printf("\n");
   
   
   printf("Turn Around time is:\t");
    for(int i=0;i<n;i++)
    {
    printf("%d\t",p[i].tat);
    }
    printf("\n");
    
    printf("Waiting time\t\t");
    for(int i=0;i<n;i++)
    {
    printf("%d\t",p[i].wt);
    }
    printf("\n");
   
    for(int i=0;i<n;i++)
	{
		avgtat+=p[i].tat;
		avgwt+=p[i].wt;
	}
	
    avgtat=avgtat/n;
    avgwt=avgwt/n;
	printf("\n");
	printf("Average Turnaroundtime time is:%.3f \n",avgtat);
	printf("Average Waiting time is: %.3f \n",avgwt);
}
