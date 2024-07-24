o//alphABET OR NOT
#include<stdio.h>
int main(){
	char c;
	printf("enter the character:");
	scanf("%c",&c);
	if((c>='a'&& c<='z')||(c>='A'&& c<='Z'))
	  printf("%c is a alphabet",c);
	else
	  printf("%c is not a alphabet",c);
	return 0;
}
