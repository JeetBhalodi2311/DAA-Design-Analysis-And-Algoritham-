#include <stdio.h>

int count_digit(int n){
    int digit=0;

    if(n==0){
        return 0;
    }
    return 1 + count_digit(n / 10);

}

void main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);

    printf("%d",count_digit(n));
}