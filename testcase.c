#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *file;

    file = fopen("BEST.txt","w");
    for(int i=1; i<=100000; i++)
    {
        fprintf(file,"%d ",i);
    }
    fclose(file);

    file = fopen("WROST.txt","w");
    for(int i=100000; i>=1; i--)
    {
        fprintf(file,"%d ",i);
    }
    fclose(file);

    file = fopen("AVERAGE.txt","w");
    for(int i=1; i<=100000; i++)
    {
        fprintf(file,"%d ",rand()%100000);
    }
    fclose(file);
}