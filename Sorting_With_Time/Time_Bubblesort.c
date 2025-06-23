#include <stdio.h>
#include <time.h>
#include <stdlib.h>

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
    
    printf("Time : %f",time);


}