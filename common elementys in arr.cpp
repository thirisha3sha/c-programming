//common elements in array

#include <stdio.h>

int main() {
    int arr1[500];
    int arr2[500];
    int i,j,n1,n2;
    printf("enter the size of array 1:");
    scanf("%d",&n1);
    printf("\nenter the elements of array 1:");
    for(i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("\nenter the size of array 2:");
    scanf("%d",&n2);
    printf("\nenter the elements of array 2:");
    for(j=0;j<n2;j++){
        scanf("%d",&arr2[j]);
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(arr1[i]==arr2[j])
            {
                printf("\n common elemnts are:%d", arr1[i]);
            }
        }
    }
    
    

    return 0;
}

