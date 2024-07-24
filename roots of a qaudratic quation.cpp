//roots of  a quadratic equation
#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,discriminant,root2,root1,real,imaginary;
	printf("enter coefficients a,b,c:");
	scanf("%lf %lf %lf",&a,&b,&c);
	discriminant=b*b-4*a*c;
	if(discriminant>0){
		root1=(-b + sqrt(discriminant))/(2*a);
		root2=(-b - sqrt(discriminant))/(2*a);
		printf("root1=%.2lf   /n root2-%.2lf",root1,root2);
	}	
	else if(discriminant==0){
		root1=root2=-b/(2*b);
		printf("root1=root2=%.2lf",root1);
	}
	else{
		real=-b/(2*b);
		imaginary=sqrt(-discriminant)/(2*a);
		printf("root1=%.2lf+%.2lfi \n  root2=%.2lf - %2.lfi",real,imaginary,real,imaginary);
	}
	return 0;
	
	
}
