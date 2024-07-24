//product of elelements in the array
#include<stdio.h>
int main(){
	int n,a[1000],i,product=1;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the %d elements:",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		product=product*a[i];
	}
	printf("\n product of elements in the array:%d",product);
	return 0;
	
}
