class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mpp;
        int n=nums.size();
        for(auto c:nums){
            mpp[c]++;
        }
        for(auto ch:mpp){
            if(ch.second>n/3){
                ans.push_back(ch.first);
            }
        }
        return ans;
        
    }
};