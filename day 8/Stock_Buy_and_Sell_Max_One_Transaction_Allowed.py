class Solution:
    def maximumProfit(self, prices):
        maxPro = 0
        minPrice = float("inf")
        for i in range(len(prices)):
            minPrice = min(minPrice, prices[i])
            maxPro = max(maxPro, prices[i] - minPrice)
        return maxPro


if __name__ == "__main__":
    t = int(input())  # Read number of test cases
    for _ in range(t):
        # Read input and split it into a list of integers
        prices = list(map(int, input().split()))
        # Create a Solution object and calculate the result
        obj = Solution()
        result = obj.maximumProfit(prices)
        # Print the result
        print(result)
