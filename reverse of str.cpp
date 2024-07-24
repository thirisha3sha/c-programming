//reverse str without library fun
#include<stdio.h>
#include<string.h>
int main(){
	int n,i;
	char s[1000];
	printf("enter the string:");
	gets(s);
	n=strlen(s);
	printf("reversed string:");
	for(i=n-1;i>=0;i--){
		printf("%c",s[i]);
	}
	return 0;
}
