//to find quotient and remainder
#include<stdio.h>
int main(){
	int divident,divisor,quot,remainder;
	printf("enter the divident:");
	scanf("%d",&divident);
	printf("enter the divisior:");
	scanf("%d",&divisor);
	quot=divident / divisor;
	remainder=divident % divisor;
	printf("quotient=%d",quot);
	printf("reaminder=%d",remainder);
	return 0;
}
