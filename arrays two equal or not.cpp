//check two arr are equal or not
#include<stdio.h>
int main(){
	int a1[100],a2[100],i,j,n1,n2,count=0;
	printf("enter the size of array1:");
	scanf("%d",&n1);
	printf("enter the %d elemnts in array1;",n1);
	for(i=0;i<n1;i++){
		scanf("%d",a1[i]);
	}
	printf("enter the size of array2:");
	scanf("%d",&n2);
	printf("enter the %d elemnts in array2;",n2);
	for(i=0;i<n2;i++){
		scanf("%d",a2[i]);
	}
	for(i=0;i<n1;i++){
		if(a1[i]==a2[j]){
			count=count+1;
		}
		else{
			count=count+0;
			
		}
		
	}
	if(count==1){
		printf("two arrays are equal");
	}
	else{
		printf("two arrays are not equal:");
	}
	return 0;
	
}
