#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int min = 100001;
        int max = -100001;
        int num = -1;
        int index = 0;
        bool flag = true;
        for (int i = 0; i < nums.size()-1; ++i) {
            if (nums[i] == nums[i+1])
                continue;
            flag = false;
            break;
        }
        if (flag){
            vector<int> a = {1,1};
            return a;
        }
        for (const auto& list:nums) {
            if(list[list.size()-1] < min){
                min = list[list.size()-1];
                num = index;
            }
            index++;
        }
        for (int i = 0; i < nums.size(); ++i) {
            if(i == num){
                continue;
            }
            for (int n:nums[i]) {
                if (n >= min){
                    if(max > n)
                        break;
                    max = n;
                    break;
                }
            }
        }
        vector<int> a = {min,max};
        return a;
    }
};

int main() {
//    vector<vector<int>> v = {{1,2,3}, {1,1,3}, {1,2,3}};
//    Solution solution;
//    vector<int> re = solution.smallestRange(v);
//    for (int i : re) {
//        cout << i << " ";
//    }
    char *a = "ss";
    return 0;
}
