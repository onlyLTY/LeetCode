#include <stdio.h>

int singleNumber(int* nums, int numsSize){
    int result = 0;
    for (int i = 0; i < numsSize; ++i) {
        result = result ^ nums[i];
    }
    return result;
}

int main() {
    int nums[] = {2,2,1};
    int result = singleNumber(nums,sizeof(nums)/sizeof(nums[0]));
    printf("%d", result);
    return 0;
}
