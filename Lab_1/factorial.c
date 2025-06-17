#include <stdio.h>

void main(){
    int n;
    int fect=1;

    printf("Enter number : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        fect*=i;
    }
    printf("Fectorial : %d",fect);
}