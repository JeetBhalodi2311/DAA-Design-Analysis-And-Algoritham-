#include <stdio.h>

void main(){
    int a,b;
    int pow=1;

    printf("Enter base : ");
    scanf("%d",&a);

    printf("Enter power : ");
    scanf("%d",&b);

    for(int i=1; i<=b; i++){
        pow*=a;
    }

    printf("%d",pow);

}