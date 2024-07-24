//perfect number
#include<stdio.h>
int main()
{
	int n,sum=0,i;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
		
	}
	if(sum==n)
	{
		printf("\n %d is perfect number",n);
	}
	else{
		printf("\n %d is not perfect number",n);
	}
	return 0;
}
