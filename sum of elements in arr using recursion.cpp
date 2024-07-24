#include<stdio.h>
int sum(int a[],int n)
{
	if(n<=0)
	{
		return 0;
	}
	else
	{
		return (sum(a,n-1)+a[n-1]);
	}
}
int main()
{
	int n,i,a[1000];
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("sum of the elements in the array:%d",sum(a,n));
	return 0;
}
