#include <stdio.h>
#include <time.h>
#include <stdlib.h>

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

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int left = 0, right = n - 1, mid;

    start = clock();

    while (left <= right)
    {
        mid = left + (right - left) / 2;

        if (arr[mid] == key)
        {
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        }
        else if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    end = clock();

    if (!found)
    {
        printf("Element not found.\n");
    }

    time = ((float)(end - start)) / CLOCKS_PER_SEC;

    printf("Time taken: %lf seconds\n", time);

    return 0;
}
