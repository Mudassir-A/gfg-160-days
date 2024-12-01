from collections import Counter


class Solution:
    # Function to find the majority elements in the array
    def findMajority(self, arr):
        # Your Code goes here.
        ans = []
        n = len(arr)
        counts = dict(Counter(arr))

        for key, value in counts.items():
            if value > n / 3:
                ans.append(key)
        ans.sort()
        return ans


def main():
    t = int(input().strip())
    for _ in range(t):
        s = input().strip()
        nums = list(map(int, s.split()))
        ob = Solution()
        ans = ob.findMajority(nums)
        if not ans:
            print("[]")
        else:
            print(" ".join(map(str, ans)))


if __name__ == "__main__":
    main()
