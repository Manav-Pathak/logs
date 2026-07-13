class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        mini = prices[0]
        profit=0
        n=len(prices)

        for i in range(n):
            mini = min(prices[i],mini)
            profit = max(profit, prices[i] - mini)

        return profit




        