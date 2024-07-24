//area of triangle
#include<stdio.h>
int main()
{
	float area,breadth,height;
	printf("enter the breadth :");
	scanf("%f",&breadth);
	printf("enter the height:");
	scanf("%f",&height);
	area=0.5*breadth*height;
	printf("area of triangle:%f",area);
	return 0;
}
