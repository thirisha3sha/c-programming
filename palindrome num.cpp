//palindrome number
#include<stdio.h>
int main()
{
	int num,reverse,remainder,original;
	printf("enter the num:");
	scanf("%d",&num);
	original=num;
	reverse=0;
	while(num!=0)
	{
		remainder=num%10;
		reverse=reverse*10+remainder;
		num=num/10;
	}
	if(original==reverse)
	{
		printf("%d is palindrome",original);
		
	}
	else
	{
		printf("%d is not palindrome",original);
	}
	return 0;
}
