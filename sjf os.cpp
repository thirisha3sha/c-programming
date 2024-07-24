//sjf disk scheduling
#include<stdio.h>
int main()
{
	int p[20],bt[10],wt[20],tat[10],i,j,position,temp,twt,ttat,n;
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
	for(i=0;i<n;i++)
	{
		position=i;
		for(j=i+1;j<n;j++)
		{
			if(bt[j]<bt[position])
			{
			    position=j;	
				
			}
		}
		temp=bt[i];
		bt[i]=bt[position];
		bt[position]=temp;
		temp=p[i];
		p[i]=p[position];
		p[position]=temp;
	}
	wt[0]=0;
	for(i=1;i<n;i++)
	{
		wt[i]=bt[i-1]+wt[i-1];
		twt+=wt[i];
	}
	
	awt=twt/n;
	for(i=0;i<n;i++)
	{
		tat[i]=bt[i]+wt[i];
		ttat+=tat[i];
	}
	atat=ttat/n;
	printf("\nProcess ID\t Burst time\t Waiting time\t Turn around time");
	for(i=0;i<n;i++)
	{
		printf("\np%d\t\t",p[i]);
		printf("%d\t\t",bt[i]);
		printf("%d\t\t",wt[i]);
		printf("%d\t\t",tat[i]);
		printf("\n");
	}
	printf("\naverage waiting time:%.3f",awt);
	printf("\naverage turn around time:%.3f",atat);
	
	
}
