//descending order array

#include <stdio.h>

int main() {
    int arr[500];
    int i,j,n,temp;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("\nenter the elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        
        }
        
    }
    printf("\n descending order:");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
