#include <stdio.h>

int main(void)
{
    int nums, num, i=0, total=0;
    printf("How much do you wanna type numbers?");
    scanf("%d", &nums);
    while(i<nums)
    {
        scanf("%d", &num);
        
        total+=num;
        i++;
    }
    
    printf("It`s average: %.2lf", (double)total/nums);

    return 0;
}