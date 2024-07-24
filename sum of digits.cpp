//sum of digits
#include <stdio.h>

int main() {
    int n,sum,remainder;
    printf("enter the number;");
    scanf("%d",&n);
    sum=0;
    while(n!=0){
        remainder=n%10;
        sum=sum+remainder;
        n=n/10;
    }
    printf("sum of digits is %d",sum);

    return 0;
}

