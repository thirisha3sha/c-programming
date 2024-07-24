//sum  of two prime numbers
#include<stdio.h>
int checkprime(int n);
int main(){
	int n,i,check=0;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++){
		if(checkprime(i)==1){
			if(checkprime(n-i)==1){
				printf("%d=%d +%d \n",n,i,n-i);
				check=1;
			}
		}
	}
	if(check==0){
		printf("%d cannot be expressed in sum of two prime numbers",n);
	}
	return 0;
}
int checkprime(int n){
	int i,prime=1;
	if(n==0||n==1){
		prime=0;
	}
	else{
		for(i=2;i<n/2;i++){
			if(n%i==0){
				prime=0;
				break;
			}
		}
	}
	return prime;
}

