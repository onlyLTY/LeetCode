#include <stdio.h>
#include <malloc.h>
#include <math.h>

int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    int n1[1001] = {0};
    for (int i = 0; i < nums1Size; ++i) {
        n1[nums1[i]]++;
    }
    int n2[1001] = {0};
    for (int i = 0; i < nums2Size; ++i) {
        n2[nums2[i]]++;
    }

    *returnSize = 0;
    int* intersection = (int*)malloc(sizeof(int) * fmin(nums1Size, nums2Size));

    for (int i = 0; i < 1001; ++i) {
        if (n1[i] > 0 && n2[i] > 0) {
            if (n1[i] < n2[i]) {
                for (int j = 0; j < n1[i]; ++j) {
                    intersection[(*returnSize)++] = i;
                }

            } else{
                for (int j = 0; j < n2[i]; ++j) {
                    intersection[(*returnSize)++] = i;
                }
            }

        }
    }

    return intersection;
}

int main() {
    int nums1[] = {4,9,5};
    int nums2[] = {9,4,9,8,4};
    int *returnSize = malloc(sizeof(int ));
    int *a = intersect(nums1,3,nums2,5,returnSize);
    for (int i = 0; i < *returnSize; ++i) {
        printf("%d", a[i]);
    }

    return 0;
}
