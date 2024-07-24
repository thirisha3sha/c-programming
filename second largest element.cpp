//2nd max in array
#include<stdio.h>
int main(){
	int i,n,a[1000],max1,max2;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the %d elements:",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	max1=a[0];
	max2=a[0];
	for(i=0;i<n;i++){
		if(max1<a[i])
		   max2=max1;
		   max1=a[i];
	}
	printf("\n second largest number in the array:%d",max2);
	return 0;
}
