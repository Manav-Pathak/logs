class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int n =numbers.size();
        int i=0,j=n-1,sum=0;
        vector<int> ans(2,0);

        while(i<j){
            sum = numbers[i]+numbers[j];
            if(sum < target) i++;
            if(sum > target) j--;
            if(sum == target){
                ans={i+1,j+1};
                break;
            }
        }       

        
        return ans;                
    }   
};
