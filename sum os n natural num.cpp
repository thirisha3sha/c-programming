//to print sum of n natural numbers
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter the limit");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("the sum of %d natural numbers is:%d",n,sum);
	return 0;
}
