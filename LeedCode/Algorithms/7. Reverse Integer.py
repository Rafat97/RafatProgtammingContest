'''
input: 
123
-123
120
0
1534236469

Output
321
-321
21
0
0
'''

class Solution:
    def reverse(self, x: int) -> int:
        range_value = 2**31
        val  = x;
        
        output = ""
        if x < 0:
            output += "-"
        val = abs(val)    
        
        
        while True:
            dig =  val%10
            val = int(val/10)
            output += str(dig)
            if val == 0:
                break
               
        val = int(output)
        # print(output)
        if -range_value <= val <= range_value - 1:
            return val
        else:
            return 0

        