class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> ans;
        
        int n = strs.size();
        unordered_map <string ,vector<string>> mpp;
                
        for(int i=0; i<n;i++){
            vector<int> count(26,0);
            for(int j=0; j<strs[i].size();j++){
                count[strs[i][j] - 'a']++;
            }
            //mpp[count] = strs[i];
            string key = to_string(count[0]);
            for(int i=1; i<26; i++){
                key += ','+ to_string(count[i]);
            }
            mpp[key].push_back(strs[i]);            
        }
        //int i=0;
        for(auto it : mpp){
            ans.push_back(it.second);             
        }

        return ans;
                
    }
};
