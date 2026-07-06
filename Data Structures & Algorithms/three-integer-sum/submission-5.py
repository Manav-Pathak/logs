class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:

        n = len(nums)
        nums.sort()
        ans = []

        for i in range(n):
            if i > 0:
                if nums[i]==nums[i-1]: continue
            rem = 0 - nums[i]
            left = i+1
            right = n-1

            while left < right:
                summ = nums[left] + nums[right]
                if summ<rem: left+=1;
                elif summ>rem: right-=1;
                else:
                    ans.append([nums[i],nums[left],nums[right]])
                    left+=1
                    right-=1
                    while left<right and nums[left] == nums[left-1]: 
                        left+=1
        return ans
                
                

