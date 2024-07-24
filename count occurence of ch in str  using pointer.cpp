//to count the occurences of a character in a str using pointers
#include<stdio.h>
#include<string.h>
int main()
{
	char *s;
	char c;

	int i=0,length,count=0;
	printf("enter the string:");
	gets(s);
	printf("\nenter the character to count occurences:");
	scanf("%c",&c);
	length=strlen(s);
	for(i=0;i<length;i++){
	    if(s[i]==c)
		{
			count++;
		}
	
	}
	printf("\noccurence of is:%d  ",count); 
}

