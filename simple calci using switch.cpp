//simple calculator
#include<stdio.h>
int main(){
	char operation;
	double n1,n2;
	printf("enter an operator:+,-,*,/");
	scanf("%c",&operation);
	printf("enter the num1:");
	scanf("%lf",&n1);
	printf("enter the num2:");
	scanf("%lf",&n2);

	switch(operation){
		case '+':
			printf("%.2lf+%.2lf=%.2lf",n1,n2,n1+n2);
			break;
	
	    case '-':
	    	printf("%.2lf - %.2lf =%lf",n1,n2,n1-n2);
	    	break;
	    case '*':
	    	printf("%.2lf * %.2lf =%.2lf",n1,n2,n1*n2);
	    	break;
	    case '/':
	    	printf("%.2lf/%.2lf=%.2lf",n1,n2,n1/n2);
	    	break;
	    default:
	    	printf("operator is not correct");
	    
		
}
return 0;

}
