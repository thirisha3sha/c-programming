//reverse an array with pointers
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[1000],n,i;
	int *ptr;
	printf("enter the size of array:");
	scanf("%d",&n);
	ptr=(int *)malloc(n * sizeof(int));
	printf("enter the elements of the array:");
	for(i=0;i<n;i++){
		scanf("%d",ptr+i);
	}
	printf("reverse of array:");
	for(i=n-1;i>=0;i--){
		printf("%d  ",*(ptr+i));
	}
	return 0;
}
