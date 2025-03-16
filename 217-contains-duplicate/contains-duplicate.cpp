class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            if(mpp.find(nums[i])!=mpp.end()){
               return true;       
            }
            mpp[nums[i]]=i;
        }
        return false;
    }
};