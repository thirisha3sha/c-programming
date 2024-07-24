//concatenate of two str 
#include<stdio.h>
#include<string.h>
int main(){
	char s1[1000],s2[1000];
	int i;
	int j=strlen(s1);
	printf("enter the string1:");
	gets(s1);
	printf("enter the string2:");
	gets(s2);
	for(i=0;s2[i]!='\0';i++){
		s1[i+j]=s2[i];
		
	}
	s1[i+j]=s2[i];
	printf("concatenate of two strings:%s",s1);
	return 0;
}
