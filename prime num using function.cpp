//prime or not using function
#include<stdio.h>
void checkprime(int n);
int main(){
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	checkprime(n);
	return 0;
}
void checkprime(int n){
	int i,prime=1;
	for(i=0;i<n/2;i++){
		if(n%i==0)
		{
			prime=0;
		}
	}
	if(prime==1){
		printf("\n%d is prime number",n);
	}
	else{
		printf("\n %d is not prime number",n);
	}
	
}
