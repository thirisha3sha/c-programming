//cout=nt of even and odd in array

#include <stdio.h>

int main() {
    int a[500];
    int i,j,n,oddcount,evencount;
    printf("enter the size of the array:");
    scanf("%d",&n);
    printf("\nenter the elemnts in tha array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    oddcount=0;
    evencount=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            evencount=evencount+1;
        }
        else
        {
            oddcount=oddcount+1;
        }
    
    }
    printf(" number of even number:%d",evencount);
    printf("\n");
    printf("number of odd number:%d",oddcount);
    
    return 0;
}
