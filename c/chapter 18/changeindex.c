#include <stdio.h>

int main(void){
    int arr[3][2] = { {1, 2},
                      {3, 4},
                      {5, 6}
    };

    printf("arr[2][1] = %d\n",arr[2][1]);
    printf("(*(arr+2))[1] = %d\n", (*(arr+2))[1]);
    printf("*(arr[2]+1) = %d\n",*(arr[2]+1));
    printf("*(*(arr+2)+1) = %d\n", *(*(arr+2)+1));
    printf("%p\n", arr);
    printf("%p\n", arr[1]);
    printf("%p\n", *(arr[0]+1));

    return 0;
}