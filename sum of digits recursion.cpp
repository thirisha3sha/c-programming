#include<stdio.h>
int sum(int n);
int main()
{
	int n,result;
	printf("enter the number:");
	scanf("%d",&n);
	result=sum(n);
    printf("\nsum of digits of %d is:%d",n,result);
	
	
	return 0;
}
int sum(int n)
{
	
	if(n!=0)
	{
		return (n%10+sum(n/10));
	}
	else
	{
		return 0;
	}


}
