//largest element in array using pointers
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,n,*ptr;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the %d elements in array:",n);
	ptr=(int *)malloc(n * sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;i++){
		if(*ptr<*(ptr+i)){
			*ptr=*(ptr+i);
		}
		
		}
	printf("\n maximum element in array:%d",*ptr);
	return 0;
}
