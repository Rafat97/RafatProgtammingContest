class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        newList = []
        maxVal = max(candies)

        for i in candies:
            val = i + extraCandies
            if(val >= maxVal):
                newList += [True]
            else:
                 newList += [False]               
        
        return newList
        


solve = Solution()
print(
    solve.kidsWithCandies(
        [4,2,1,1,2],
        1
    )
)