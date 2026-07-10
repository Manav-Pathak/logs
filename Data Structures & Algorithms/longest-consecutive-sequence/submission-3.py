class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        st = set(nums)
        cand=0
        n = len(nums)
        ans=0

        for i in range(n):
            if nums[i] -1 in st:
                continue
            else:
                cand = nums[i]
                c=1

            while cand +1 in st:
                c+=1
                cand+=1

            ans=max(c,ans)
        
        return ans