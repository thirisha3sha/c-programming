//remove element or character in array
#include<stdio.h>
int main()
{
	int i,n,a[1000],position;
	printf("enter the seize of the array:");
	scanf("%d",&n);
	printf("enter the elements of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the position of element to delete:");
	scanf("%d",&position);
	if(position>=n+1)
	{
		printf("\n deletion is not posible");
		
	}
	else
	{
		for(i=position-1;i<n-1;i++)
		{
			a[i]=a[i+1];
		}
		printf("\n array after deleting %dth position:",position);
		for(i=0;i<n-1;i++)
		{
			printf("\na[%d]= %d",i,a[i]);
		}
	}
	return 0;
	
}
