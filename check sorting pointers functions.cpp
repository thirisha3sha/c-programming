//check the array is sorted or not
#include<stdio.h>
#include<stdlib.h>
void checksort(int *ptr,int n){
	int a=1,d=1,i=0;
	while((a==1||d==1)&& i<n-1){
		if(ptr[i]<ptr[i+1]){
			d=0;
		}
	}
	
}
int main(){
	int i,n;
	int *ptr;
	printf("\n enter the size of the array:");
	scanf("%d",&n);
	ptr=(int *)malloc(n * sizeof(int));
	printf("\nenter the elements in the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	checksort(ptr,n);
	return 0;
}
