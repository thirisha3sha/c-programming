//strct revenue of store;
#include<stdio.h>
#include<stdlib.h>
struct item{
	char *name[1000];
	float price;
	int quantitysold;
};
int main()
{
	int n,i;
	float revenue;
	printf("enter the number of products:");
	scanf("%d",&n);
	
	struct item *ptr=(struct item *)malloc(n * sizeof(struct item));
	for(i=0;i<n;i++)
	{
		printf("enter the name of product:");
		scanf("%s",ptr[i].name);
		printf("enter price of product:");
		scanf("%f",&ptr[i].price);
		printf("enter the quantity of product sold:");
		scanf("%f",&ptr[i].quantitysold);
		
	}
	printf("\n product wise revenue:");
	for(i=0;i<n;i++)
	{
		revenue=(ptr[i].price) * (ptr[i].quantitysold);
		printf("%s: %2f\n",ptr[i].name,revenue);
	}
	return 0;
}
