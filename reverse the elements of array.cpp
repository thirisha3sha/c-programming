//reverse the elements of arr
#include<stdio.h>
int main(){
	int i,a[1000],n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the %d elements in array:");
	for(i=0;i<n;i++){
	
	    scanf("%d",&a[i]);
	}
	printf("\nreverse of the given array:");
	for(i=n-1;i>=0;i--){
		printf("%d   ",a[i]);
	}
	return 0;
	
}
