//sum of odd even positions in array
#include<stdio.h>
int main(){
	int n,even=0,odd=0,i,a[10000];
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(i%2==0){
			even=even+a[i];
		}
		else{
			odd=odd+a[i];
		}
		}
	printf("\nsum of even positions in the array:%d",even);
	printf("\nsum of odd positions in the array:%d",odd);
	return 0;
	}

