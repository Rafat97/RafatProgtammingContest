class Solution(object):
    def numIdenticalPairs(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        counter = dict()
        for i in nums:
            if i in counter:
                counter[i] += 1
            else:
                counter[i] = 1

        sum = 0

        for val in counter.values():
            sum +=  (val*(val-1))/2

        return sum


solve = Solution()
print(
    solve.numIdenticalPairs(
    [1,1,1,1]
    )
)