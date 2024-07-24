//to determine vowel or consonant
#include<stdio.h>
int main()
{
	char a,vowel;
	printf("enter a character:");
	scanf("%c",&a);
	vowel=(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U');
	if(a==vowel)
	{
		printf("it is vowel");
	}
	else{
		printf("it is consonant");
	}
	return 0;
}

