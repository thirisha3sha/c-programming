//sorting array using pointers
#include<stdio.h>
#include<stdlib.h>
void sortascending(int *ptr,int n){
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(*(ptr+i)>*(ptr+j)){
				temp=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=temp;
			}
		}
	}
	printf("ascending order:");
	for(i=0;i<n;i++){
		printf(" %d ",*(ptr+i));
	}
}
int main(){
	int i,n,*ptr;
	printf("\nenter the size:");
	scanf("%d",&n);
	ptr=(int *)malloc(n * sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",ptr+i);
	}
	sortascending(ptr,n);
	return 0;
}
