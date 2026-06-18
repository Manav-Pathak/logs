class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        nums.sort()
        ans=1
        n=len(nums)
        c=1

        if not nums:
            return 0
            
        for i in range(n-1):
            if nums[i] == nums[i+1]:
                continue
            
            # If consecutive, increase current streak
            if nums[i+1] - nums[i] == 1:
                c += 1
            else:
                # Sequence broke, reset current streak
                ans = max(ans, c)
                c = 1
            

        return max(ans, c) 
        
        