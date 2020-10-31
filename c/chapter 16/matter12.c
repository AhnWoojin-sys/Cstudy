#include <stdio.h>

int main(void)
{
    int arr1[2][4], arr2[4][2];
    int i,j;
    int num = 1;
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            arr1[i][j] = num;
            num++;
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
            printf("%-2d", arr1[i][j]);
        printf("\n");
    }
    printf("\n");

    for(i=0;i<4;i++)
    {
        for(j=0;j<2;j++)
            arr2[i][j] = arr1[j][i];
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<2;j++)
            printf("%-2d", arr2[i][j]);
        printf("\n");
    }


    return 0;
}