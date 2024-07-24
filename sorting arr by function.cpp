//sorting of array using function
#include<stdio.h>
void sort(int n,int a[]);
int main(){
	int a[1000],n,i;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the %d elements:",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(n,a);
	return 0;
	
	
	
}
void sort(int n,int a[]){
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

	printf("\n sorted arrray:");
	for(i=0;i<n;i++){
		printf(" %d  ",a[i]);
	}
}

