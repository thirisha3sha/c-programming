//sum of even and odd elemnts in array

#include <stdio.h>

int main() {
    int a[500];
    int i,j,n,oddsum,evensum;
    printf("enter the size of the array:");
    scanf("%d",&n);
    printf("\nenter the elemnts in tha array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    oddsum=0;
    evensum=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            evensum=evensum+a[i];
        }
        else
        {
            oddsum=oddsum+a[i];
        }
    
    }
    printf(" number of even number:%d",evensum);
    printf("\n");
    printf("number of odd number:%d",oddsum);
    
    return 0;
}
