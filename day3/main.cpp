#include <stdio.h>
#include <stdlib.h>

#include <string.h>

void rotate(int* nums, int numsSize, int k){
    k %= numsSize;
    int tmp[numsSize];

    for (int i = 0; i < numsSize; ++i) {
        tmp[(i+k)%numsSize] = nums[i];
    }

    memcpy(nums, tmp, sizeof(int) * numsSize);
}


//void rotate(int* nums, int numsSize, int k) {
//
//    typedef struct node{
//        int num = 0;
//        node *next = nullptr;
//    } Node;
//    // 执行旋转操作...
//
//    // 输出全部数字
//    node *head = new node;
//    node *temp = head;
//    node *tail;
//    for (int i = 0; i < numsSize; i++) {
//        temp->next = new node;
//        temp = temp->next;
//        temp->num = nums[i];
//    }
//    tail = temp;
//    temp = head;
//    printf("%d",tail->num);
//    for (int i = 0; i <= k; ++i) {
//        temp = temp->next;
//    }
//    tail->next = head->next;
//    head->next = temp->next;
//    temp->next = nullptr;
//    temp = head;
//    int i = 0;
//    while (temp->next != nullptr){
//        temp = temp->next;
//        nums[i] = temp->num;
//        i++;
//    }
//}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int k = 3;

    rotate(nums, numsSize, k);

    return 0;
}