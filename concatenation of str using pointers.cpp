//concatenate 2 str
#include<stdio.h>
int main(){
	char s1[1000],s2[1000];
	char *str1=s1;
	char *str2=s2;
	printf("enter the string1:");
	gets(s1);
	printf("enter the string2:");
	gets(s2);
	while(*(++str1));
	while(*(str1++)=*(str2++));
	printf("concatenation of teo strings:%s",s1);
	return 0;
}
