class Solution:
    def getSecondLargest(self, arr):
        n = len(arr)
        maxi = arr[0]
        smax = -1

        for i in range(1, n):
            if arr[i] > maxi:
                smax = maxi
                maxi = arr[i]
            elif arr[i] > smax and arr[i] < maxi:
                smax = arr[i]
        return smax


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        arr = list(map(int, input().split()))
        ob = Solution()
        ans = ob.getSecondLargest(arr)
        print(ans)
