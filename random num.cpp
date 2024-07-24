//random number
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int random(int lower,int upper){
	return (rand()%(upper - lower+1))+lower;
}
int main(){
	int lower,upper,randomnum;
	printf("enter the lower num:");
	scanf("%d",&lower);
	printf("\nenter the upper num:");
	scanf("%d",&upper);
	srand(time(0));
	randomnum=random(lower,upper);
	printf("\nrandom number between %d and %d is:%d",lower,upper,randomnum);
	return 0;
}

