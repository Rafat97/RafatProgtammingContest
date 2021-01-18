
'''
Sample I : 

"abcabcbb"
"bbbbb"
"pwwkew"
""
" "

Sample O :
3
1
3
0
1
'''
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        dic = {}
        list_sub_str = []
        output= 0
        start = 0
        dic2 = {}
        for i in range(len(s)):
            key = s[i]
            if key in dic:
                start = max(dic[key]  , start)
                # list_sub_str.append(dict(dic2))
                # output = max(output , len(dic2))
                # dic2.clear()
            output = max(output , i - start + 1)
            # dic2[key] = 0
            dic[key]  = i+1 

        return output
        


solve = Solution()
print(
    solve.lengthOfLongestSubstring(
        "pwwkew"
    )
)
