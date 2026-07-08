class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = Counter(nums)
        lst = sorted(freq,key=freq.get,reverse=True)
        ans=[]
        for i in range(k):
            ans.append(lst[i])
        return ans
