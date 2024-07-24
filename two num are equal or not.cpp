//two numbers are equal or not

#include <stdio.h>

int main() {
    int a,b;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    if(a==b){
        printf("both are equal");
    }
    else{
        printf("%d and %d are not equal",a,b);
    }

    return 0;
}

