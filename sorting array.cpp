//sorting array in ascending
#include<stdio.h>
int main(){
	int a[1000],n,i,j,temp;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the %d elements of the array:",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
	}
	printf("sorting of given array:");
	for(i=0;i<n;i++){
		printf("%d  ",a[i]);
	}
	return 0;
}
