//to swap two variables using pointers
#include<stdio.h>
int main()
{
	int x,y,*ptrx,*ptry,temp;
	printf("enter the num1:");
	scanf("%d",&x);
	printf("\nenter the num2:");
	scanf("%d",&y);
	printf("\nbefore swapping:%d  %d",x,y);
	ptrx=&x;
	ptry=&y;
	temp=*ptrx;
	*ptrx=*ptry;
	*ptry=temp;
	printf("\nafter swapping:%d  %d",x,y);
	return 0;
	
}
