#include <stdio.h>

void main(){
    int n;

    int a=0;
    int b=1;
    int c;

    printf("Enter number : ");
    scanf("%d",&n);

    printf("%d,",a);
    printf("%d,",b);
    
    for(int i=0;i<n;i++){
        c=a+b;
        printf("%d,",c);
        a=b;
        b=c;
    }
}