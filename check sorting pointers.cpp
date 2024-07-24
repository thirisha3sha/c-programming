//to check arr is sorted using pointers
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i,*ptr;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the %d elements in array:",n);
	ptr=(int *)malloc(n * sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;i++){
		if((ptr[i])>(ptr[i+1])){
			printf("it is sorted in descending order");
			break;
		}
		else if((ptr[i])<(ptr[i+1])){
			printf("it is sorted in ascending order");
			break;
		}
		else{
			printf("it is not sorted");
			break;
		}
		
	}
	return 0;
}
