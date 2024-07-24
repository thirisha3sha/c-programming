//sum,diff,producyt,division
#include<stdio.h>
int main()
{
	int x,y;
	printf("enter the num1:");
	scanf("%d",&x);
	printf("enter the  num2:");
	scanf("%d",&y);
	int sum=x+y;
	int diff=x-y;
	int product=x*y;
	int division=x/y;
	printf("sum=%d difference=%d  product=%d  division=%d",sum,diff,product,division);
	return 0;
	
}
