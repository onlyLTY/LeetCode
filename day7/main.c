#include <stdio.h>
#include <malloc.h>

int* plusOne(int* digits, int digitsSize, int* returnSize){
    int i = 1;
    while (1){
        if (digits[digitsSize - i] != 9){
            break;
        } else {
            i++;
        }
        if (digitsSize - i < 0){
            break;
        }
    }
    if (i > digitsSize){
        *returnSize = digitsSize + 1;
    } else{
        *returnSize = digitsSize;
    }
    int * returnNum = (int *)malloc(sizeof(int) * (*returnSize));
    for (int j = i - 1; j > 0; --j) {
        returnNum[*returnSize - j] = 0;
    }
    if(i > digitsSize){
        returnNum[0] = 1;
        return returnNum;
    }
//    if(i > 1){
//        returnNum[digitsSize - i] = digits[digitsSize - i] + 1;
//    }
//    if(1 == i){
//        returnNum[digitsSize - i] = digits[digitsSize - i] + 1;
//    }
    returnNum[digitsSize - i] = digits[digitsSize - i] + 1;
    for (int j = 0; j < digitsSize - i; ++j) {
        returnNum[j] = digits[j];
    }


    return returnNum;
}

int main(){
    int a[] = {1,2,4};
    int b = 0;
    int *c = plusOne(a,3,&b);
    for (int i = 0; i < b; ++i) {
        printf("%d\n",c[i]);
    }
}
