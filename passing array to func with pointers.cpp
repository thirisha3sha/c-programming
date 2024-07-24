//passing an array to a function using pointers
#include<stdio.h>
#include<stdlib.h>
void array(int *ptr,int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d  ",*(ptr+i));
	}
	
}
int main(){
	int n,i,*ptr;
	printf("enter the size of array:");
	scanf("%d",&n);
	ptr=(int *)malloc(n * sizeof(int));
	printf("enter the %d elements in array:",n);
	for(i=0;i<n;i++){
		scanf("%d",ptr+i);
	}
	array(ptr,n);
	return 0;
}
