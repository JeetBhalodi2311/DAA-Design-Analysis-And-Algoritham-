#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void merge(int arr[],int left,int right,int mid){
    int n1 = mid-left+1;
    int n2 = right-mid;

    int L[n1],R[n2];

    for(int i = 0; i < n1; i++){
        L[i] = arr[left + i];
    }
    for(int j = 0; j < n2; j++){
        R[j] = arr[mid + 1 + j];
    }
    int i = 0, j = 0, k = left;
    while(i < n1 && j < n2){
        if (L[i] <= R[j]){
            arr[k++] = L[i++];
        } 
        else{
            arr[k++] = R[j++];
        }
    }

    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(int arr[],int left,int right){
    if(left<right){
        int mid = left + (right-left)/2;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        merge(arr,left,right,mid);
    }
}


int main()
{
    clock_t start, end;
    float time;
    int n, ch, key;
    FILE *file;
    int found = 0;

    printf("Enter The Size Of The Array: ");
    scanf("%d", &n);

    int arr[n]; 

    printf("1) Best-Case\n2) Average-Case\n3) Worst-Case\nEnter your choice: ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        file = fopen("C:/Users/ASUS/OneDrive/Desktop/DAA_lab/BEST.txt", "r");
        break;
    case 2:
        file = fopen("C:/Users/ASUS/OneDrive/Desktop/DAA_lab/AVERAGE.txt", "r");
        break;
    case 3:
        file = fopen("C:/Users/ASUS/OneDrive/Desktop/DAA_lab/WROST.txt", "r");
        break;
    default:
        printf("INVALID CHOICE\n");
        return 1;
    }

    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        fscanf(file, "%d", &arr[i]);
    }
    fclose(file);


    start = clock();

    mergeSort(arr,0,n-1);

    end = clock();

    time = ((float)(end - start)) / CLOCKS_PER_SEC;

    printf("Time taken: %lf seconds\n", time);

    return 0;
}
