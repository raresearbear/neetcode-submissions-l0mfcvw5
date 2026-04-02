class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        smallest = sys.maxsize
        largest = 0
        profit = 0
        for price in prices:
            if price < smallest:
                smallest = price
                largest = 0
            elif price > largest:
                largest = price
            profit = max(profit, largest - smallest)
        return profit