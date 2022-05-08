#leetcode problem 9 palindrome number

class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
    
        return str(x) == str(x)[::-1]
