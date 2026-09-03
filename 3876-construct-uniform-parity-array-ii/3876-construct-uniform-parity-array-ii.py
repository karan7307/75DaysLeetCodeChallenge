class Solution(object):
    def uniformArray(self, nums):
        a = min(nums)
        if a%2 == 1:    
            return True
        for i in nums:
            if i%2 == 1: 
                return False
        return True         