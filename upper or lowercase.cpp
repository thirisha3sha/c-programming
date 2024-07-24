//uppercase or lower
#include<stdio.h>
int main(){
	char a;
	printf("enter the alphabet:");
	scanf("%c",&a);
	if(a>='a'&& a<='z'){
		printf("it is lowercase");
	}
	else if(a>'A'&& a<='Z'){
		printf("it is uppercase");
	}
	else{
		printf("invalid input");
	}
	return 0;
}
