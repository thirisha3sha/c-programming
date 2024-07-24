//min max of array
#include<stdio.h>
int main(){
	int a[10000];
	int i,j,min,max,n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(min>a[i]){
			min=a[i];
		}
		if(max<a[i]){
			max=a[i];
		}
		
	}
	printf("min=%d",min);
	printf("max=%d",max);
	return 0;
	
	
}
