//sum of elements in array using pointers
#include<stdlib.h>
#include<stdio.h>
int main(){
	int i,n,sum=0;
	int *ptr;
	printf("enter the size of array:");
	scanf("%d",&n);
	ptr=(int *)malloc(n * sizeof(int));
	printf("enter the elements:");
	for(i=0;i<n;i++){
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;i++){
		sum=sum+*(ptr+i);
	}
	printf("sum of elements in array:%d",sum);
	return 0;
}
