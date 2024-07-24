//to reverse a string using pointers
#include<stdio.h>
#include<string.h>

int main()
{
	
	char *s,str[100];
	int length,i;
	printf("enter the string:");
	gets(str);
	s=str;

	length=strlen(str);
	printf("\n reverse of string:");
	for(i=length;i>=0;i--)
	{
		printf("%c",*(s+i));
	
	
	}
	return 0;
}
