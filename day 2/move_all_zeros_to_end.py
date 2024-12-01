class Solution:
    def pushZerosToEnd(self, nums):
        n = len(nums)
        j = -1
        for i in range(n):
            if nums[i] == 0:
                j = i
                break
        if j == -1:
            return

        for i in range(j + 1, n):
            if nums[i] != 0:
                nums[i], nums[j] = nums[j], nums[i]
                j += 1

        return nums


if __name__ == "__main__":
    tc = int(input())
    while tc > 0:
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ob.pushZerosToEnd(arr)
        for x in arr:
            print(x, end=" ")
        print()
        tc -= 1
