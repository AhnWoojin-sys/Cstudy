#include <stdio.h>

void SimpleFuncOne(int *ary1, int *ary2) {}
void SimpleFuncTwo(int (*ary1)[4], int (*ary2)[4]) {}
void ComplexFuncOne(int **arr1 , int* (*arr2)[5]){}
void ComplexFuncTwo(int** (*arr1)[5], int*** (*arr2)[5]){}

int main(void){
    int arr1[3];
    int arr2[4];
    int arr3[3][4];
    int arr4[2][4];
    int * arr5[3];
    int * arr6[3][5];
    int ** arr7[3][5];
    int *** arr8[3][5];

SimpleFuncOne(arr1, arr2);
SimpleFuncTwo(arr3, arr4);
ComplexFuncOne(arr5, arr6);
ComplexFuncTwo(arr7, arr8);

    return 0;
}