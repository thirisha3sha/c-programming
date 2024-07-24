//copy one str to another using a func with pointers
#include<stdio.h>
#include<string.h>
void copy(char *s1,char *s2){
	printf("\n copy of strings:%s",strcpy(s2,s1));
}
int main(){
	char s1[1000],s2[1000];
	printf("enter the string to copy:");
	gets(s1);
	printf("\nactual string:%s",s1);
	copy(s1,s2);
	return 0;
}
