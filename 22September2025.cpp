class Solution {
public:
    int maxim(vector<int>& nums){
        int maxi=INT_MIN;
        for(auto it: nums){
            if(it>maxi){
                maxi=it;
            }
            
        }
    return maxi;
    }
    int maxFrequencyElements(vector<int>& nums) {
    vector<int>map(maxim(nums)+1,0);
    for(auto it:nums){
        map[it]++;
    }        
    int ans=0;
    int tar=maxim(map);
    for(auto it : map){
        if(it==tar){
            ans=ans+it;
        }
    }
    return ans;
    }
};
