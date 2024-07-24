//str palindrome
#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,j,length;
	char palindrome=false;
	printf("enter the string:");
	gets(s);
	length=strlen(s);
	for(i=0,j=length-1;i<j;i++,j--)
	{
		if(s[i]!=s[j])
		{
			palindrome=false;
		}
	}
	if(palindrome==false)
	{
		printf("string is palindrome");
	}
	else{
		printf("string is not palindrome");
	}
	return 0;
}
