//multipliction table
#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the multiplication table: ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("\n %d * %d = %d",n,i,n*i);
	}
	return 0;
}
