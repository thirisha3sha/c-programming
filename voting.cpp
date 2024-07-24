#include<stdio.h>
int main()
{
	int age,diff;
	printf("enter the age");
	scanf("%d",&age);
	if(age>18)
	{
		printf("not eligible");
	}
	else
	{
		diff=(18-age);
		printf("eligible age requried is %d",diff);
	}
	return 0;
}
