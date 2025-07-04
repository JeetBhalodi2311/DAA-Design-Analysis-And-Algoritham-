#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main()
{
    clock_t start,end;
    float time;
    int n,ch,element;
    FILE *file;

    printf("Enter The Size Of The Array : ");
    scanf("%d",&n);

    int arr[n];

    printf("1)Best-Case 2)Average-Case 3)Wrost-Case :- ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        file = fopen("C:/Users/ASUS/OneDrive/Desktop/DAA_lab/BEST.txt","r");
        
        break;
    
    case 2:
        file = fopen("C:/Users/ASUS/OneDrive/Desktop/DAA_lab/AVERAGE.txt","r");
        break;
    
    case 3:
        file = fopen("C:/Users/ASUS/OneDrive/Desktop/DAA_lab/WROST.txt","r");
        break;
    
    default:
        printf("INVALID CHOICE");
        break;
    }
    
    for(int i=0; i<n; i++)
    {
        fscanf(file,"%d",&arr[i]);
    }
    fclose(file);

    printf("Enter The Element For Serch : ");
    scanf("%d",&element);

    start = clock();

    for (int i = 0; i < n; i++)
    {
        if (arr[i]==element)
        {
            printf("Element Fount At %d th Position\n",i);
            break;
        }
        
    }

     end = clock();
    
    time = ((float)(end-start))/CLOCKS_PER_SEC;
    
    printf("Time : %lf",time);
}