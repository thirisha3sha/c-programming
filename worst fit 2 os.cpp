//worst fit 2
//best fit 2
#include<stdio.h>
int main()
{
	int fragment[20],b[20],p[20],i,j,block,process,temp,highest=9999;
	int blocks[20],processes[20];
	printf("\n\t\t\tMemory Management Scheme - Best Fit");
	printf("\nEnter the number of blocks:");
	scanf("%d",&block);
	printf("Enter the number of processes:");
	scanf("%d",&process);
	printf("\nEnter the size of the blocks:-\n");
	for(i=1;i<=block;i++)
	{
	    printf("Block no.%d:",i);
	    scanf("%d",&b[i]);
	}
	printf("\nEnter the size of the processes :-\n");
	for(i=1;i<=process;i++)
	{
	    printf("Process no.%d:",i);
	    scanf("%d",&p[i]);
	}
	for(i=1;i<=process;i++)
	{
	    for(j=1;j<=block;j++)
	    {
	       if(blocks[j]!=1)
	       {
	          temp=b[j]-p[i];
	          if(temp>=0)
	            if(highest<temp)
	            {
	                processes[i]=j;
	                highest=temp;
	            }
	        }
	    }
	fragment[i]=highest;
	blocks[processes[i]]=1;
	highest=10000;
	}
	printf("\nProcess_no\tProcess_size\tBlock_size\tBlock_no\tFragment");
	for(i=1;i<=process && processes[i]!=0;i++)
	{
	    printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d",i,p[i],p[i],blocks[i],processes[i],fragment[i]);
	}
}
