#include <stdio.h>

int a_power_b(int a,int b){
    if(b==0){
        return 1;
    }
    else{
        return a * a_power_b(a,b-1);
    }
}

void main(){
    int a,b;

    printf("Enter base : ");
    scanf("%d",&a);

    printf("Enter power : ");
    scanf("%d",&b);

    printf("%d",a_power_b(a,b));
}