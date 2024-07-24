//second smallest element in array
#include<stdio.h>
int main(){
	int n,i,a[1000],min1,min2;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the %d of the array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	min1=a[0];
	min2=a[0];
	for(i=0;i<n;i++){
		if(min1>a[i]){
			min2=min1;
			min1=a[i];
			
		}
		else if(a[i]<min2 && a[i]!=min1){
			min2=a[i];
			
		}
	}
	printf("\n the second smallest element in the array:%d",min2);
	return 0;
}
