class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        int n=nums.size(),sum=0,rem=0;
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;

        
        set<vector<int>>build;

        for(int i=0; i<n;i++){

            unordered_set<int>st;             

            for(int j=i+1;j<n;j++){

                rem = 0 - (nums[i] + nums[j]);

                if(st.find(rem)!=st.end()){
                    build.insert({nums[i],nums[j],rem});
                }
                else st.insert(nums[j]);
            }
        }
        for(const auto& it : build) ans.push_back(it);
        return ans;
        
    }
};