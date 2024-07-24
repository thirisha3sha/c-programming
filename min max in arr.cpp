//min max in arr
#include<stdio.h>
int main(){
	int a[100],i,min,max,n;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the %d elements in array:",n);
	for(i=0;i<n;i++){
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
	printf("minimum in array:%d",min);
	printf("maximum in array:%d",max);
	return 0;
}
