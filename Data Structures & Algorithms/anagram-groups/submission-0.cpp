class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> ans;
        
        int n = strs.size();
        map <vector<int>,vector<string>> mpp;
        
        
        for(int i=0; i<n;i++){
            vector<int> count(26,0);
            for(int j=0; j<strs[i].size();j++){
                count[strs[i][j] - 'a']++;
            }
            //mpp[count] = strs[i];
            mpp[count].push_back(strs[i]);            
        }
        //int i=0;
        for(auto it : mpp){
            ans.push_back(it.second);             
        }

        return ans;
                
    }
};
