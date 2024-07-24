//swap using pointers
#include<stdio.h>
int main(){
	int n1,n2,temp;
	int *ptr1=&n1;
	int *ptr2=&n2;
	printf("enter the num 1:");
	scanf("%d",&n1);
	printf("enter the num2:");
	scanf("%d",&n2);
	printf("before swapping:%d %d",n1,n2);
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	printf("after swapping:%d  %d",*ptr1,*ptr2);
	return 0;
	
}
