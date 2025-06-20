#include <stdio.h>
#include <time.h>

void main(){
    clock_t start,end;
    float time;


    start = clock();
    for (int i = 0; i < 1000; i++)
    {
        printf("*");
    }

    end = clock();
    
    time = ((float)(end-start))/CLOCKS_PER_SEC;
    printf("\n%f",time);
    printf("%c"+end);
}