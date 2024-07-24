//count vowels in str using function
#include<stdio.h>

int vowelcount(char s[]){
	int count =0,i;
	for(i=0;s[i];i++){
		if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| s[i]=='A'|| s[i]=='E'||s[i]=='I'|| s[i]=='O'|| s[i]=='U')
		     count=count+1;
	}
	printf("\n the number of vowels in the string:%d",count);
	
}
int main(){
	char s[1000];
	printf("\n enter the string:");
	gets(s);
	vowelcount(s);
	return 0;
}
