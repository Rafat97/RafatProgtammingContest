'''
"PAYPALISHIRING"
3
"PAYPALISHIRING"
4
"A"
1
"ABCDEF"
2
'''
class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows == 1:
            return s 
        
        str1 = [""] * numRows
        trac = 0
        flag = False
            
        for stri in s:
            
            str1[trac] += stri
            
            if trac == numRows-1 or trac == 0:
                flag = not flag
                
            trac +=  1 if flag else -1
                

            
        out  = ""
        for s in str1:
            out += s
        return out


solve = Solution()
print(
    solve.convert(
        "PAYPALISHIRING",
        3
    )
)