#include <stdio.h>

int sum_of_n(int n){

    if (n == 1) {
        return 1;
    }
    else if(n==0){
        return 0;
    }
    else{
        return n + sum_of_n(n-1);
    }
    
}

void main(){
    int n;

    printf("Enter number : ");
    scanf("%d",&n);

    printf("%d",sum_of_n(n));

}