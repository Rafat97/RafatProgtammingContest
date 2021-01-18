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
        size  = len(newlist)
        
        if(size == 0):
            return 0.00000
        elif(size%2 == 0):
            indx = floor(size/2)
            out = ( newlist[indx] +  newlist[indx-1] ) / 2.0
            return round(out ,5)
        else:
            indx = floor(size/2)
            return round(newlist[indx],5)
        
