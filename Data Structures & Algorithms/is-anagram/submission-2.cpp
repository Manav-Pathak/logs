class Solution {
public:
    bool isAnagram(string s, string t) {

    
        int n1=s.size(), n2=t.size(),i=0,j=0;

        unordered_map<char,int> mpp1,mpp2;

        while(i<n1 || j<n2){
            if(i<n1) mpp1[s[i]]++;
            if(j<n2) mpp2[t[j]]++;
            i++;
            j++;
        }

        return (mpp1==mpp2)? 1: 0;        

               
    }
};
