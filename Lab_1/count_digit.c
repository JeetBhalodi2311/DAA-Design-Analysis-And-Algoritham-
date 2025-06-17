#include <stdio.h>

void main(){
    int n,digit=0;

    printf("Enter number : ");
    scanf("%d",&n);

    while (n!=0)
    {
        digit++;
        n=n/10;
    }
    

    printf("%d",digit);
    
}