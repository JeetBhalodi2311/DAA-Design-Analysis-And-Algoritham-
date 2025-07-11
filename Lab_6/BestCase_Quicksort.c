#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Bestcase(int arr[], int i, int j) {
    if (i < j) {
        int mid = (i + j) / 2;

        int temp = arr[i];
        arr[i] = arr[mid];
        arr[mid] = temp;

        Bestcase(arr, i + 1, mid);
        Bestcase(arr, mid + 1, j);
    }
}

int main() {
    clock_t start, end;
    float time;
    int n;
    FILE *file;

    printf("Enter The Size Of The Array: ");
    scanf("%d", &n);

    int arr[n]; 

    file = fopen("C:/Users/ASUS/OneDrive/Desktop/DAA_lab/BEST.txt", "r");

    for (int i = 0; i < n; i++)
    {
        fscanf(file, "%d", &arr[i]);
    }
    fclose(file);

    start = clock();

    Bestcase(arr,0,n-1);

    end = clock();

    time = ((float)(end - start)) / CLOCKS_PER_SEC;

    printf("Time taken: %lf seconds\n", time);

    return 0;
}