#leetcode problem 13 roman to integer

s="XL"
#dictionary usage is important!
roman = {
            "I": 1,
            "V": 5,
            "X": 10,
            "L": 50,
            "C": 100,
            "D": 500,
            "M": 1000
        }
        
print(s)
s = s.replace("IV", "IIII").replace("IX","VIIII").replace("XL", "XXXX").replace("XC", "LXXXX").replace("CD", "CCCC").replace("CM", "DCCCC")
number = 0
for i in s:
    number += roman[i]
    
print(number)