//convert gn str to lowercase
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i;
	char s[1000];
	printf("enter the string:");
	gets(s);
	printf("lowercase of the given string:");
	for(i=0;s[i]!='\0';i++){
		if(s[i]>='A'&& s[i]<='Z'){
			s[i]=s[i]+32;
		}
	}
	printf("\n%s",s);
}
