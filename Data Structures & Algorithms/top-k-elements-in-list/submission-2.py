class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        n= len(nums)
        mpp = Counter(nums)
        ans=[]
        bucket = [[] for _ in range(n+1)] 
        # key is number, value is freq
        # bucket index is frequncy = value

        for key,value in mpp.items():
            bucket[value].append(key)
        
        rem = k

        for i in range(n,0,-1):
            for j in range(0,len(bucket[i])):
                ans.append(bucket[i][j])
                rem-=1
                if rem ==0:
                    return ans        