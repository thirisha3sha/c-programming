#include<stdio.h>
#define r 2
#define c 3
int main(){
    int i,j,sum=0;
    int a[r][c];
    int x=1;
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            a[r][c]=x++;
        }
    }

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum=sum + a[i][j];
		}
	}
	printf("sum  %d \n",sum);
}
