//count the number 0f words in str
#include<stdio.h>
int main(){
	char s[1000];
	int count=0,i;
	printf("enter the string:");
	gets(s);
	for(i=0;s[i]!='\0';i++){
		if(s[i]==' '&&s[i+1]!=' '){
			count++;
		}
	}
	printf("number of words in string:%d",count+1);
	return 0;
}
