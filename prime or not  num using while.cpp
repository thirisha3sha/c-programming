//prime num using while
#include<stdio.h>
int main(){
	int n,i=2,prime=0;
	printf("enter a number:");
	scanf("%d",&n);
	while(i<n){
		if(n%i==0)
		{
			
			prime++;
		}
		i++;
		
	}
	if(prime==0){
		printf("\n it is prime number",n);
	}
	else{
		printf("\n it is not a prime number",n);
	}
	return 0;
	}

