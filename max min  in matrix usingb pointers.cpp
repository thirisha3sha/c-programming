//max min in matrix  using pointers
#include<stdio.h>
int getlarge(int *ptr,int m,int n);
int getsmall(int *ptr,int m,int n);
int getlarge(int *ptr,int m,int n){
	int max=*ptr,i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(*(ptr+10*i+j)>max){
				max=*(ptr+10*i+j);
			}
		}
	}
	return max;
	
}
int getsmall(int *ptr,int m,int n){
	int min=*ptr,i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(*(ptr+10*i+j)<min){
				min=*(ptr+10*i+j);
			}
		}
	}
	return min;
}
int main(){
	int a[10][10],large,small;
	int m,n,i,j;
	printf("enter row and column size:");
	scanf("%d %d ",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("a[%d][%d]=",i,j);
			scanf("%d",a[i][j]);
		}
	}
	large=getlarge(&a[0][0],m,n);
	small=getsmall(&a[0][0],m,n);
	printf("maximum value in matrix:%d",large);
	printf("minimum value in matrix:%d",small);
	return 0;
	
}
