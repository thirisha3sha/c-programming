//celsius to fahrenheit
#include<stdio.h>
int main(){
	double celsius,fahrenheit;
	printf("enter the celsius:");
	scanf("%lf",&celsius);
	fahrenheit=(celsius*1.8)+32;
	printf("\n fahrenheit=%lf",fahrenheit);
	return 0;
}
