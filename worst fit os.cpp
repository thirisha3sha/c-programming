//best fit
//first fit
#include<stdio.h>
struct block
{
	int id,size,alloc;
}b[10],temp;
struct process
{
	int id,size,blockno;
}p[10];
int main()
{
	int i,j,m,n;
	printf("\nenter the num of memory blocks:");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		printf("\nenter the id and size of block:");
		scanf("%d %d",&b[i].id,&b[i].size);
		b[i].alloc=-1;
	}
	printf("\nenter the no of process;");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter the id and size of process:");
		scanf("%d %d ",&p[i].id,&p[i].size);
		p[i].blockno=-1;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m-i-1;j++)
		{
			if(b[j].size<b[j+1].size)
			{
			   temp=b[j];
			   b[j]=b[j+1];
			   b[j+1]=temp;
	        }  
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(b[j].alloc=-1 && b[j].size>=p[i].size)
			{
				p[i].blockno=b[j].id;
				b[j].alloc=1;
				break;
			}
		}
	}
	printf("\nprocess no\t block no\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t\t%d\n",p[i].id,p[i].blockno);
		
	}
	return 0;	
}
