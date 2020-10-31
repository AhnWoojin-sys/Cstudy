#include <stdio.h>
void BubbleSort(int arr[], int len);
void Swap(int *xp, int *yp);

int main(void)
{
    int arr[4] = {4, 3, 1, 2};
    
    BubbleSort(arr, sizeof(arr)/sizeof(int));
    
    for(int i=0;i<4;i++)
    {
        printf("arr[%d] = %d\n", i, *(arr+i));
    }

    return 0;
}

void BubbleSort(int arr[], int len) // ascending bubble sort
{
    int i, j;
    for(i=0;i-1<len;i++)
    {
        // Last i elementals are already in place
        for(j=0;j<len-1-i;j++)
        {
            if(arr[j]> arr[j+1])
                Swap(&arr[j], &arr[j+1]);
        }
    }

}

void Swap(int *xp, int *yp)
{
    int temp;
    temp = *xp;
    *xp = *yp;
    *yp = temp;
}
