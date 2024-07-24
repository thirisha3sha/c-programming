//to remove duplicate
#include<stdio.h>
int main()
{
	int a[1000];
	int n,duplicate,i,j;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i]=a[i+1];
			
		}
    }
    printf("after removing duplicates");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	
	
	
	return 0;
}
