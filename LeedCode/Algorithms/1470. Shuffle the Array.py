class Solution(object):
    def shuffle(self, nums, n):
        """
        :type nums: List[int]
        :type n: int
        :rtype: List[int]
        """
        new_list = []
        for i in range(n):
            new_list += [nums[i], nums[i+n]]
        
        return new_list



solve = Solution()
print(
    solve.shuffle(
        [1,2,3,4,4,3,2,1],
        3
    )
)