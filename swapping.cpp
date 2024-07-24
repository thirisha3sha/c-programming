//swapping of two num
#include<stdio.h>
int main()
{
	int x,y,temp;
	printf("enter the num1:");
	scanf("%d",&x);
	printf("enter the num2:");
	scanf("%d",&y);
	temp=x;
	x=y;
	y=temp;
	printf("after swapping:%d  %d",x,y);
	return 0;
}
