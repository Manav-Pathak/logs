class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> count;
        vector<vector<int>> freq(nums.size() + 1);
        int n = nums.size();

        for (int x : nums) {
            //count[n] = 1 + count[n];
            count[x]++;
        }
        
        for(auto it: count){
            freq[it.second].push_back(it.first);
        }
        vector<int>ans;
        int rem =k;

        for(int i = n; i>=0; i--){
            
                for(int j=0;j<freq[i].size();j++){
                    if (rem>0){
                        ans.push_back(freq[i][j]);
                        rem--;
                    }                    
                }
            
        }
        return ans;
    }
};
