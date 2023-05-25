#include <stdio.h>

void moveZeroes_old(int* nums, int numsSize){
    int *low,*high;
    low = nums + numsSize - 1;
    high = nums + numsSize - 1;
    while (low != nums - 1){
        if (0 == *low){
            for (int *i = low;i != high ; i++) {
                *i = *(i+1);
                *(i+1) = 0;
            }
        }
        low--;
    }
}

void moveZeroes(int* nums, int numsSize){
    int *low = nums,*high = nums;
    for (; high < nums+numsSize; high++) {
        if(0 == *high){
            continue;
        }
        *low = *high;
        low++;
    }
    for (; low < nums+numsSize; low++) {
        *low = 0;
    }
}


int main() {
    int a[] = {0,5,3,0,7};
    moveZeroes(a,5);
    for (int i = 0; i < 5; ++i) {
        printf("%d\n",a[i]);
    }
    return 0;
}
