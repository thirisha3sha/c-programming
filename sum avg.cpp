//sum avg
#include<stdio.h>
int main(){
	int sum=0,a,n,i;
	float avg;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("\nenter %d numbers:",n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		sum=sum+a;
	}
	avg=sum/n;
	printf("\nsum=%d",sum);
	printf("\navg=%.3f",avg);
	return 0;
}
