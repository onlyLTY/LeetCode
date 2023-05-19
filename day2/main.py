from typing import List


class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        flag = -1
        i = 0
        j = 0
        profit = 0
        while j < len(prices):
            if flag == -1:
                flag = j
            if prices[j] - prices[flag] > 0:
                profit = profit + prices[j] - prices[flag]
                flag = j
            if prices[j] - prices[flag] < 0:
                flag = j
            j = j + 1
        print(profit)
        return profit


a = Solution()
b = [1,2,3,4,5,6]
a.maxProfit(b)
