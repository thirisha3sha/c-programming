//copy of str to another usingbpointers
#include<stdio.h>
#include<string.h>
void copy(char *s1,char *s2){
	printf("\ncopy os strings:%s",strcpy(s2,s1));
}
int main(){
	char s1[1000],s2[100];
	printf("enter the string to copy:");
	gets(s1);
	printf("\nactual string:%s",s1);
	copy(s1,s2);
	return 0;
}
