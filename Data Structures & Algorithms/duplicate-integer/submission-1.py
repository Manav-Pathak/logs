class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        mpp={}
        ans = False
        for i in nums:
            if i in mpp:
                ans = True
            mpp[i]=1

        return ans
        