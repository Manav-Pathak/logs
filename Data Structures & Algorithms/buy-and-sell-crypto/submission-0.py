class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        mini = 1000
        profit=0
        n=len(prices)

        for i in range(n):
            mini = min(prices[i],mini)
            if prices[i]>mini:
                profit = max(profit, prices[i] - mini)

        return profit




        