class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        int n=nums.size(),sum=0,rem=0;
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;        

        for(int i=0;i<n;i++){

            int first=i+1,last=n-1;
            if(i>0){
                if(nums[i] == nums[i-1]) continue;
            }
            
            rem = 0 - nums[i];

            while(first < last){
                               
                sum = nums[first] + nums[last];
                if(sum < rem) first++;
                else if(sum >rem) last--;
                else{
                    ans.push_back({nums[i],nums[first],nums[last]});
                    first++;
                    last--;
                    while(first < last && nums[first] == nums[first-1]) first++;
                    //while((first < n-1-1) && (nums[first]==nums[first+1])) first++;
                    //while((last>0) && nums[last]==nums[last-1]) last--;
                    
                    //break;                    
                }
            }
        }
        return ans;        
    }
};