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

    printf("BEST case\n");
    start = clock();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    end = clock();


    time = ((float)(end-start))/CLOCKS_PER_SEC;
    printf("%f",time);
}


// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main() {
//     FILE *file;
//     clock_t start, end;
//     int arr[100000];
//     int n = 100000;
//     int i, j;

//     file = fopen("../BEST.txt", "r");

//     for (i = 0; i < n; i++) {
//         fscanf(file, "%d", &arr[i]);
//     }
//     fclose(file);

//     printf("best case scenario ");

//     start = clock();

//     for (i = 0; i < n - 1; i++) {
//         for (j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     end = clock();

//     float time = ((float)(end - start)) / CLOCKS_PER_SEC;
//     printf("Time taken for best case: %f", time);

//     return 0;
// }