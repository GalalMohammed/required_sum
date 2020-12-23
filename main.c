#include <stdio.h>
#include <stdlib.h>

int size,req_sum;

void req_indices (int arr[]);

int main()
{
    printf("Enter the number of elements:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements:");
    for (int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the required sum:");
    scanf("%d",&req_sum);
    req_indices(arr);
    return 0;
}

void req_indices(int arr[])
{
    int j=size-1,solution=0;
    for (int i=0; i<j; i++)
    {
        for(; i<j; j--)
        {
            if (arr[i]+arr[j]==req_sum)
            {
                while (arr[i]+arr[j]==req_sum)
                {
                    solution++;
                    printf("Indices (%d): %d,%d\n",solution,i,j);
                    j--;
                }
                j=size-1;
                break;
            }
        }
        j=size-1;
    }
}
