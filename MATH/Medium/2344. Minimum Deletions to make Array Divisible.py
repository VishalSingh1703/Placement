https://leetcode.com/problems/minimum-deletions-to-make-array-divisible/


from fractions import gcd
class Solution:
    def minOperations(self, nums, numsDivide):
        nums.sort()
        if nums[0] == 1:
            return 0

        g = 0
        for i in numsDivide:
            g = gcd(g, i)

        if g == 1 or g < nums[0]:
            return -1

        for i, num in enumerate(nums):
            if g % num == 0:
                return i

        return -1
