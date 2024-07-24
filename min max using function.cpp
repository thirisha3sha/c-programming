//maximum minimum in arr using function
#include<stdio.h>
int maximum(int a[],int n)
{
	int max=a[0],i;
	for(i=1;i<n;i++){
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
	
}
int minimum(int a[],int n){
	int min=a[0],i;
	for(i=1;i<n;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	return min;
}
int main(){
	int n,i,a[1000];
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the %d elements:",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int result1=maximum(a,n);
	int result2=minimum(a,n);
	printf("\n maximum element:%d",result1);
	printf("\n minimum element:%d",result2);
	return 0;
	
}

