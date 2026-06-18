class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int n=nums.size(),ans=1,c=1,crnt=0;
        if(n==0) return 0;
        unordered_set<int> st(n);
        
        for(int num : nums) st.insert(num);

        for(int i=0; i<n;i++){

            if(st.find(nums[i] -1) != st.end()) continue;

            else if(st.find(nums[i] -1) == st.end()){
                crnt = nums[i];
                c=1;   //reset for new sequence
            }            
            
            while(st.find(crnt + 1) != st.end()){
                c++;
                crnt++;
            }            
            ans = max(ans,c);
        }

        return ans;
                
    }
};
