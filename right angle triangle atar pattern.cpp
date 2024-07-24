//right angle triangle pattern star
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
