'''
-----NOT SOLVED---

Input:
[1,3]
[2]
[1,2]
[3,4]
[0,0]
[0,0]
[]
[1]
[2]
[]
[1,3]
[2,7]
[]
[2,3]


Output:
2.00000
2.50000
0.00000
1.00000
2.00000
2.50000
'''
class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        newlist = nums1 + nums2
        newlist.sort()
        size  = floor(len(newlist) / 2 )
        if(size%2 == 0):
            out = ( newlist[size] +  newlist[size-1] ) / 2.0
            return round(out ,5)
        else:
             # print(size)
            return round(newlist[size],5)
        
       
        # div = (len(newlist) if len(newlist) != 0 else 1)
        # output = sum(newlist)/div
        # size = len(newlist)/2
        # return output 