//compare two str
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[1000],s2[1000];
	int i,count=0;
	printf("enter the string 1:");
	gets(s1);
	printf("enter the string 2;");
	gets(s2);
	if(strlen(s1)==strlen(s2))
	{
		for(i=0;s2[i]!='\0';i++)
		{
			if(s1[i]==s2[i])
			  count++;
			
		}
		if(count==i)
		{
			printf("both are equal");
		}
		else 
		{
			printf("both are not equal");
		}
	}
	else{
		printf("both are not equal");
	}
	return 0;
	
}
