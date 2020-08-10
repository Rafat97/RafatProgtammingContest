class Solution(object):
    def runningSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        sum = 0
        ans = []
        for i,n in enumerate(nums):
            sum += n
            ans.append(sum)

        return ans

            
        


solve = Solution()
print(
    solve.runningSum(
        [1,2,3,4]
    )
)