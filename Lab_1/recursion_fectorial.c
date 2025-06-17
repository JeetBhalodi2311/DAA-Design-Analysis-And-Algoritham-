#include <stdio.h>

int fectorial(int n){
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * fectorial(n - 1);
    }
}

void main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);

    printf("%d",fectorial(n));
}