//reverse an arr using function with pointers
#include<stdio.h>
#include<stdlib.h>
void reverse(int *ptr,int n){
	int i;
	for(i=n-1;i>=0;i--){
		printf("%d  ",*(ptr+i));
	}
}
int main(){
	int n,i,*ptr;
	printf("enter the size of the array:");
	scanf("%d",&n);
	ptr=(int *)malloc(n * sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",ptr+i);
	}
	printf("\nafter reversing array:");
	reverse(ptr,n);
}
