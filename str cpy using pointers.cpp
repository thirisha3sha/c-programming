//copy one str to another using pointers
#include<stdio.h>
#include<string.h>
int main(){
	char s1[100],s2[1000];
	char *str1=s1;
	char *str2=s2;
	printf("enter string:");
	gets(s1);
	strcpy(s2,s1);
	printf("string 1:%s",s1);
	printf("string 2:%s",s2);
	return 0;
}
