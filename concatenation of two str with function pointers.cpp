//str concatenation using function pointers
#include<stdio.h>
#include<string.h>
void join(char *s1,char *s2){
	int i;
	int j=strlen(s1);
	for(i=0;s2[i]!='\0';i++){
		s1[i+j]=s2[i];
	}
	s1[i+j]=s2[i];
	
}
int main(){
	char s1[1000], s2[1000];
	printf("enter the string:");
	gets(s1);
	printf("enter the string 2:");
	gets(s2);
	join(s1,s2);
	printf("\nconcatenation of two strings:%s",s1);
	return 0;
}
