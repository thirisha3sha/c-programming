//minimum in arr using pointers
#include<stdio.h>
int main(){
	int a[1000],n,i,*min;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the %d elements in array:",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	min=&a[0];
	for(i=0;i<n;i++){
		if(*(a+i)<*min){
			*min=*(a+i);
		}
		
	}
	printf("smallest element in array:%d",*min);
	return 0;
}
