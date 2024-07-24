//removing duplicates in arr
#include<stdio.h>
int main(){

	int a[100],count=0;
	int n,i,j,temp[n];
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
    }
    printf("array before removing duplicates:");
    for(i=0;i<n;i++){
    	printf("%d  ",a[i]);
	}
    for(i=0;i<n;i++){
    	for(j=0;j<count;j++){
		
    		if(a[i]==temp[j]){
    			break;
			}
		}
		
		if(j==count){
			temp[count]=a[i];
			count++;
		}
}
	printf("array after removing duplicates:");
    for(i=0;i<count;i++){
    	printf("%d ",temp[i]);
	}
}

