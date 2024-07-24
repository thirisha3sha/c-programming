//swapping function pointers
#include<stdio.h>
#include<stdlib.h>
void swap(int *ptr1,int *ptr2){
	int temp;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}
int main(){
	int n1,n2;
	printf("enter the number:");
	scanf("%d",&n1);
	printf("enter the number2:");
	scanf("%d",&n2);
	printf("\nbefore swapping:%d  %d ",n1,n2);
	swap(&n1,&n2);
	printf("\nafter swapping:%d  %d",n1,n2);
	return 0;
}
