//count odd even using pointers
#include<stdlib.h>
#include<stdio.h>
int main(){
	int n,i,counteven=0,countodd=0;
	int *ptr;
	printf("enter the size of the array:");
	scanf("%d",&n);
	ptr=(int *)malloc(n * sizeof(int));
	printf("enter the %d elements of the array:",n);
	for(i=0;i<n;i++){
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;i++){
		if(*(ptr+i)%2==0){
			counteven=counteven+1;
		}
		else{
			countodd=countodd+1;
		}
	}
	printf("even count =%d",counteven);
	printf("odd count =%d",countodd);
	return 0;
}
