//prime or not using function in intervals
#include<stdio.h>
int checkprime(int n);
int main(){
	int n1,n2,i,check;
	printf("enter the starting num:");
	scanf("%d",&n1);
	printf("enter the limit:");
	scanf("%d",&n2);
	printf("prime numbers between %d and %d are:",n1,n2);
	for(i=n1;i<n2;i++){
		check=checkprime(i);
		if(check==1){
			printf("%d  ",i);
		}
	
	}
	return 0;
	
}
int checkprime(int n){
	int i,check=1;
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			check=0;
			break;
		}
	}
	return check;
}
