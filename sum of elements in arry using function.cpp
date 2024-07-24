//sum of elements in arr using function
#include<stdio.h>
int sum(int n,int a[]){
	int i,sum=0;
	for(i=0;i<n;i++){
		sum=sum+a[i];
	}
	return sum;
}
int main(){
	int n,i,a[1000];
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the %d elements",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\n sum of elements in the array:%d",sum(n,a));
}
