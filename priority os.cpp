//priority disk scheduling
#include<stdio.h>
int main()
{
	int p[20],bt[10],wt[20],tat[10],i,j,position,temp,twt,ttat,n,priority[15],a,b;
	float awt,atat;
	printf("\nenter the number of processs:");
	scanf("%d",&n);
	printf("\nenter the burst time:");
	for(i=0;i<n;i++)
	{
		printf("\np%d=",i+1);
		scanf("%d",&bt[i]);
		p[i]=i+1;
	}
	printf("enter the priority for process");
	for(i=-0;i<n;i++)
	{
		printf("\np%d=",i+1);
		scanf("%d",&priority[i]);
		p[i]=i+1;
		
	}
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(priority[i]<priority[j])
            {
                temp=priority[i];
                priority[i]=priority[j];
                priority[j]=temp;
                temp=p[i];
				p[i]=p[j];
				p[j]=temp;
				temp=bt[i];
				bt[i]=bt[j];
				bt[j]=temp;
		}
        
        }
        
    }
	wt[0]=0;
	for(i=1;i<n;i++)
	{
		wt[i]=bt[i-1]+wt[i-1];
		twt+=wt[i];
	}
	
	awt=float(twt/n);
	for(i=0;i<n;i++)
	{
		tat[i]=bt[i]+wt[i];
		ttat+=tat[i];
	}
	atat=float(ttat/n);
	printf("\nProcess ID\t Burst time\t priority\t Waiting time\t Turn around time");
	for(i=0;i<n;i++)
	{
		printf("\np%d\t\t",p[i]);
		printf("%d\t\t",bt[i]);
		printf("%d\t\t",priority[i]);
		printf("%d\t\t",wt[i]);
		printf("%d\t\t",tat[i]);
		printf("\n");
	}
	printf("\naverage waiting time:%.3f",awt);
	printf("\naverage turn around time:%.3f",atat);
	
}
