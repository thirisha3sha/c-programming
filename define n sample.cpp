//define n

#include <stdio.h>
#define N 5
int main() {
    int a[N],i;
    for(i=0;i<N;i++){
        printf("enter the input:");
        scanf("%d",&a[i]);
    }
    printf("enter the array elemnts:");
    for(i=0;i<N;i++){
        printf("%d  ",a[i]);
    }
        
    return 0;
}
