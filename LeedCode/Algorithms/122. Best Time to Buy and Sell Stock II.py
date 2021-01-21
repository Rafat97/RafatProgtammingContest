class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        prft = 0
        for i in  range(1 , len(prices)):
            if prices[i]  - prices[i-1] >= 1:
                prft += prices[i]  - prices[i-1]
        return prft