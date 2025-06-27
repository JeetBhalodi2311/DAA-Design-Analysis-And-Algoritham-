
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void heapify(int arr[], int n, int i) {
    int largest = i;         
    int left = 2 * i + 1;   
    int right = 2 * i + 2;   

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        heapify(arr, i, 0);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}


void main()
{
    clock_t start,end;
    float time;
    int n,ch;
    FILE *file;

    printf("Enter The Size Of The Array : ");
    scanf("%d",&n);

    int arr[n];

    printf("1)Best-Case 2)Average-Case 3)Wrost-Case :- ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        file = fopen("./BEST.txt","r");
        break;
    
    case 2:
        file = fopen("./AVERAGE.txt","r");
        break;
    
    case 3:
        file = fopen("./WROST.txt","r");
        break;
    
    default:
        printf("INVALID CHOICE");
        break;
    }
    

    for(int i=1; i<=n; i++)
    {
        fscanf(file,"%d",&arr[i]);
    }

    start = clock();

    heapSort(arr, n);

    end = clock();
    
    time = ((float)(end-start))/CLOCKS_PER_SEC;
    
    printf("Time : %f",time);


}