//positive or negative
#include<stdio.h>
int main()
{
	double x;
	printf("enter the number:");
	scanf("%d",&x);
	if(x<0)
	{
		printf(" %d is negative number",x);
	}
	else{
		printf("%d is positive number",x);
	}
	return 0;
}
