//books structure
#include<stdio.h>
#include<string.h>
struct bookdetails{
	char name[1000];
	char author[100];
	int pages;
	float price;
};
void display(struct bookdetails b[],int n);
int main(){
	struct bookdetails b[100];
	int n,i;
	printf("enter the number of books:");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++){
		printf("\t book %d details:\n",i+1);
		printf("\n enter the book name:");
		scanf("%s",b[i].name);
		printf("\n enter the author name:");
		scanf("%s",b[i].author);
		printf("\nenter the pages of book:");
		scanf("%d",&b[i].pages);
		printf("\n  enter the price:");
		scanf("%f",&b[i].price);
	}
	display(b,n);
	
}
void display(struct bookdetails b[],int n){
	int i;
	int j=1;
	for(i=0;i<n;i++){
		printf("\n");
		printf("\nbook no:%d",j);
		printf("\nname of the book:%s",b[i].name);
		printf("\n author of book:%s",b[i].author);
		printf("\n number of pages in book:%d",b[i].pages);
		printf("\n price of book:%f",b[i].price);
		printf("\n");
		j++;
	}
}
