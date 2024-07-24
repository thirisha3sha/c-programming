//maximum in arr using pointers
#include<stdio.h>
int main(){
	int a[1000],n,i,*max;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the %d elements in array:",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	max=&a[0];
	for(i=0;i<n;i++){
		if(*(a+i)>*max){
			*max=*(a+i);
		}
		
	}
	printf("largest element in array:%d",*max);
	return 0;
}
