//2nd min in arr using function
#include<stdio.h>
int minimum(int n,int a[]){
	int i,j,min1=a[0],min2=a[0],temp;
	for(i=0;i<n;i++){
		if(min1>a[i]){
			min2=min1;
			min1=a[i];
		}
		else if(a[i]<min2 && a[i]!=min1){
			min2=a[i];
		}
		
	}
	return min2;
	
}
int main(){
	int n,i,a[1000],result;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the elements of the array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	result=minimum(n,a);
	printf("\n second smallest element :%d",result);

	return 0;
}
