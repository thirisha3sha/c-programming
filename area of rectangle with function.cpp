//area of rectangle with function
#include<stdio.h>
int area(int len,int bre){
	int area;
	area=len*bre;
	return area;
}
int main()
{
	int l,b,result;
	printf("enter the length:");
	scanf("%d",&l);
	printf("enter the breadth:");
	scanf("%d",&b);
	result=area(l,b);
	printf("%d is the area of rectangle",result);
	return 0;
}
