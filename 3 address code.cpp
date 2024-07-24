#include<stdio.h>
int main(){
	char m;
	int p1,p2,p3,result;
	printf("enter the expression:");
	scanf("%d %c %d %c %d",&p1,&m,&p2,&m,&p3);
	switch(m){
		case '+':
			result=p1+p2;
			break;
		case '-':
			result=p1-p2;
			break;
		case '*':
			result=p1*p2;
			break;
		case '/':
			result=p1/p2;
			break;
		default:
			break;
	}
	printf("three address code for given expression:%d %c %d",p1,m,p2);
	printf("\nT1=%d %c %d\n",p1,m,p2);
	printf("T2=T1\n");
	printf("T3=%d\n",result);
	return 0;
}
