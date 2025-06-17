#include <stdio.h>

void main(){
    int n;
    int sum=0;

    printf("Enter number : ");
    scanf("%d",&n);

    for(int i=0; i<=n; i++){
        sum+=i;
    }

    printf("%d",sum);
}