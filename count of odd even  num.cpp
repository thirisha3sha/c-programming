//count num of odd or even
#include<stdio.h>
int main(){
	int a[1000];
	int i,n,oddcount=0,evencount=0;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("\n enter the %d elements of the array:",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			evencount=evencount+1;
		}
		else{
			oddcount=oddcount+1;
		}
	}
	printf("\ncount of even numbers:%d",evencount);
	printf("\n count of odd numbers:%d",oddcount);
	return 0;
	
	
}
