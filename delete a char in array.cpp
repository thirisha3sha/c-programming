//remove e character in array
#include<stdio.h>
int main()
{
	int i,n,j;
	char a[1000],ch;
	printf("enter the seize of the array:");
	scanf("%d",&n);
	printf("enter the elements of the array",n);
	for(i=0;i<n;i++)
	{
		printf("\n a[%d]=",i);
		scanf("%s",&a);
	}
	printf("enter the character to delete:");
	scanf("%c",&ch);
	for(i=0,j=0;a[i]='\0';i++)
	{
		if(a[i]!=ch){
			a[j]=a[i];
			j++;
		}
		
	}
	a[j]='\0';
	printf("array after deleting %c:%s ",a);
}


