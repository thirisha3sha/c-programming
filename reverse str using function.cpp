//reverse str using function
#include<stdio.h>
void reverse();
int main(){
	
	printf("enter the string:");
	reverse();
	return 0;
	
}
void reverse()
{
	char str;
	scanf("%c",&str);
	
	if(str!='\n'){
		reverse();
		printf("%c",str);
	}
}
