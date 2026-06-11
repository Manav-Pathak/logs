class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_map <int,int> mpp(nums.size());
        bool ans=0;

        for(int i=0; i<nums.size();i++){
            if(mpp.find(nums[i])!=mpp.end()) ans=1;
            else mpp[nums[i]]++;
        }
        return ans;
        
    }
};