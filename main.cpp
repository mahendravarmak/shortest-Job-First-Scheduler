
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <bits/stdc++.h>

using namespace std;

struct proc
{
	char processid[10][10];
	int bursttime;
	int arrivaltime=0;
	int tat;
	int wt;
	int ct=0;
};

bool compareTwoStudents(proc a, proc b) 
{ 
    // If total marks are not same then 
    // returns true for higher total 
  //  if (a.bursttime != b.bursttime ) 
        return a.bursttime < b.bursttime; 
  
    // If marks in Maths are not same then 
    // returns true for higher marks 
//    if (a.math != b.math) 
//            return a.math > b.math; 
//  
//    return (a.phy > b.phy); 
}


int main()
{
	int n;
	float avgtat=0,avgwt=0;
	printf("enter how many process u want to enter\n");
	scanf("%d",&n);
	proc p[n];
	for(int i=0;i<n;i++)
	{
		printf("enter %d pocess id\n",i+1);
		scanf("%s",&p[i].processid[i]);
		printf("enter arrival time\n");
		scanf("%d",&p[i].arrivaltime);
	}
	
	for(int i=0;i<n;i++)
	{
		p[i].bursttime=p[i].arrivaltime*2;
	}

    
    sort(p,p+n,compareTwoStudents);
    	
	int k=1;
	for(int i=0;i<n;i++)
	{	
	int temp=p[i].bursttime;
	if(temp==0)
	{
		k--;
	}
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
	
   printf("arrival time is:\t");
    for(int i=0;i<n;i++)
    {
    	printf("%d\t",p[i].arrivaltime);
	} 
    printf("\n");
    
    printf("burst time is:\t\t");
    for(int i=0;i<n;i++)
    {
    printf("%d\t",p[i].bursttime);
    }
    printf("\n");


	printf("completion time is:\t");
    for(int i=0;i<n;i++)
    {
    printf("%d\t",p[i].ct);
    }
    printf("\n");
   
   
   printf("turn around time is:\t");
    for(int i=0;i<n;i++)
    {
    printf("%d\t",p[i].tat);
    }
    printf("\n");
    
    printf("waiting time\t\t");
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
	printf("average turnaroundtime time is:%.2f \n",avgtat);
	printf("average waiting time is: %.2f \n",avgwt);
}

