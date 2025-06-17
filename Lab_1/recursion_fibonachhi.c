#include <stdio.h>

int fibonachhi(int n){
    if (n <= 1) {
        return n;
    }
    return fibonachhi(n - 1) + fibonachhi(n - 2);

}

void main(){
    int n;
    int a=0,b=1;

    printf("Enter number : ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++) {
        printf("%d,", fibonachhi(i));
    }
}