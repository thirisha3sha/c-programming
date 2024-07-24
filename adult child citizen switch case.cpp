//age as i/p to declare adult,child,teenager,or senior citizen
#include<stdio.h>
int main()
{
	int age;
	printf("enter your age:");
	scanf("%d",&age);
	switch(age)
	{
		case age==0 && age<=13:
			printf("you are a child");
			break;
		case(age==14)&&(age<=20):
			printf("you are a teenager");
			break;
		case(age==21)&&(age<=40):
			printf("you are a adult");
			break;
		case(age>=41)&&(age<=150):
			printf("you are a senior citizen");
			break;
		default:
			printf("invalid input");
	
		
	
	}
	return 0;
}
