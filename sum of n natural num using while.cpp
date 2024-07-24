//sum of first n natural num
#include<stdio.h>
int main(){
	int n,sum=0,i=1;
	printf("enter the limit:");
	scanf("%d",&n);
	while(i<n){
		sum=sum+i;
		i++;
	}
	printf("\n sum of %d natural numbers:%d",n,sum);
	return 0;
	
}
