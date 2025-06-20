#include <stdio.h>

void main() 
{
    int n;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

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

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d,", arr[i]);
    }
}