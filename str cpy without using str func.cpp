//str cpy 
#include<stdio.h>
int main(){
	char s1[1000],s2[1000];
	int i;
	printf("enter string1:");
	gets(s1);
	for(i=0;s1[i]!='\0';i++){
		s2[i]=s1[i];
	}
	printf("string1:%s",s1);
	printf("\nstring2:%s",s2);
	return 0;
}
