//median of array
#include<stdio.h>
void sort(int n,int a[]);
float findmedian(int n,int a[]);
int main(){
	int a[1000],n,i;
	float median;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the %d elements:",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(n,a);
	median=findmedian(n,a);
	printf("\n median of the given array:%lf",median);
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

float findmedian(int n,int a[]){
	float median=0;
	if(n%2==0){
		median=a[n-1/2]+a[n/2];
		
	}
	else{
		median=a[n/2];
	}
	return median;

	
}
