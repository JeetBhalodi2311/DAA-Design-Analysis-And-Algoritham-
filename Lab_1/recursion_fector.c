#include<stdio.h>
void fector(int n, int i) {
    if (i > n) 
        return; 
    if (n % i == 0){
        printf("%d,", i);
    }  
    fector(n, i + 1); 
}

int main(){
    int n;

    printf("Enter number : ");
    scanf("%d",&n);

    fector(n,1);
    
    return 0;
}



