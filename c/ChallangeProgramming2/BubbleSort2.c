#include <stdio.h>
void Swap(int *xp, int *yp);
void BubbleSort(int arr[],int len);

int main(void)
{
    int arr[6];

    printf("Type Your Six numbers\n");
    for(int i=0;i<6;i++)
    {
        printf("INPUT : ");
        scanf("%d", &arr[i]);
    }
    
    BubbleSort(arr,sizeof(arr)/sizeof(int));
    for(int i=0;i<6;i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

void Swap(int *xp, int *yp)
{
    int temp;
    temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void BubbleSort(int arr[],int len)
{
    int i, j;
    for(i=0;i<len-1;i++)
    {
        for(j=0;j<len-1-i;j++)
        if(arr[j] < arr[j+1])
            Swap(&arr[j], &arr[j+1]);
    }
}
