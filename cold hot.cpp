//cold warm hot tempareature

#include <stdio.h>

int main() {
    double t;
    printf("enter the temperature:");
    scanf("%lf",&t);
    if(t<20){
        printf("%lf degree is cold",t);
        
    }
    else if(t>=20 && t<=30){
        printf("%lf degree is normal",t);
    }
    else{
        printf("%lf degree is hot",t);
    }

    return 0;
}
