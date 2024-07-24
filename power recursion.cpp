#include<stdio.h>
int power(int base,int a);
int main()
{
	int base,a,result;
	printf("enter the base:");
	scanf("%d",&base);
	printf("enter the power number:");
	scanf("%d",&a);
	result=power(base,a);
	printf("\n power  %d ^ %d is:%d ",base,a,result);
	return 0;
}
int power(int base,int a)
{
	if(a!=0)
	{
		return (base*power(base,a-1));
	}
	else
	{
		return 1;
	}
}
