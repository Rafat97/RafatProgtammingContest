'''
[1,1,2]
[0,0,1,1,1,2,2,3,3,4]

'''

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if len(nums) == 0:
            return 0
        nums.sort()
        out = 1
        for i in range(1,len(nums)):
            if nums[i] != nums[i-1]:
                nums[out] = nums[i] 
                out += 1
        return out


class Solution2:
    def removeDuplicates(self, nums: List[int]) -> int:
        if len(nums) == 0:
            return 0
        nums.sort()
        i = 0
        while i < len(nums)-1:
            if nums[i] == nums[i+1]:
                del nums[i]
            else:
                i += 1
            
        return len(nums)