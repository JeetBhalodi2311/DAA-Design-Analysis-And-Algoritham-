#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    clock_t start,end;
    float time;
    FILE *file;

    int arr[100000];
    int n=100000;

    file = fopen("./BEST.txt","r");
    for(int i=1; i<=n; i++)
    {
        fscanf(file,"%d",&arr[i]);
    }
    start = clock();

    for (int i = 1; i < n; i++) 
    {
        int key = arr[i];
        int j = i-1;

        while (key < arr[j] && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;        
   }
    end = clock();
    time = ((float)(end-start))/CLOCKS_PER_SEC;
    printf("BEST case Time : %f",time);

    // 

    file = fopen("./AVERAGE.txt","r");

    for(int i=1; i<=n; i++)
    {
        fscanf(file,"%d",&arr[i]);
    }
    fclose(file);
    start = clock();

    for (int i = 1; i < n; i++) 
    {
        int key = arr[i];
        int j = i-1;

        while (key < arr[j] && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;        
   }
    end = clock();
    time = ((float)(end-start)) / CLOCKS_PER_SEC;
    printf("\nAVERAGE case Time : %f",time);

    // 

    file = fopen("WORST.txt","r");
    for(int i=1; i<=n; i++)
    {
        fscanf(file,"%d",&arr[i]);
    }
    fclose(file);
    start = clock();
    for (int i = 1; i < n; i++) 
    {
        int key = arr[i];
        int j = i-1;

        while (key < arr[j] && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;        
   }
    end = clock();
    time = ((float)(end-start))/CLOCKS_PER_SEC;
    printf("\nWORSt case Time : %f",time);
}

