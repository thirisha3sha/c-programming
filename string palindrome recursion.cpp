#include<stdio.h>
#include<string.h>
void check(char a[],int n);
int main()
{
	char a[1000];
	printf("enter the string to check palindrome:");
	scanf("%s",a);
	check(a,0);
	return 0;
}
void check(char a[],int n)
{
	int len=strlen(a)-(n+1);
	if(a[n]==a[len])
	{
		if(n+1==len || n==len)
		{
			printf("it is palindrome");
			return;
		}
		check(a,n+1);
	}
	else
	{
		printf("it is not palindrome");
	}
}

