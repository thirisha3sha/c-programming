//to find power

#include<stdio.h>
#include<math.h>
int main()
{
	int base,power,result;
	printf("enter the base value:");
	scanf("%d",&base);
	printf("enter the power value:");
	scanf("%d",&power);
	result=pow(base,power);
	printf("%d to the power of %d is:%d",base,power,result);
	return 0;
}

