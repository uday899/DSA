class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>sortednums=nums;
        sort(sortednums.begin(),sortednums.end());
        unordered_map<int,int>mpp;
        for(int i=0;i<sortednums.size();i++){
            if(mpp.find(sortednums[i])==mpp.end()){
                mpp[sortednums[i]]=i;
            }
        }
         vector<int>ans;
         for(int i=0;i<nums.size();i++){
            ans.push_back(mpp[nums[i]]);

         }
         return ans;
    }
};