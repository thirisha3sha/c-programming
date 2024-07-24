//palindrome string

#include<stdio.h>
#include<string.h>

int main()
{
	char s[1000];
	int length,i,count=0;
	printf("enter the string:");
	gets(s);
	length=strlen(s);
	for(i=0;i<length/2;i++)
	{
		if(s[i]==s[length-i-1])
		   count++;
	}
	if(count==i){
		printf("string is palindrome");
		
	}
	else{
		printf("string is not palindrome");
	}
	return 0;
	
}
