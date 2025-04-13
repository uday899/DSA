class Solution {
public:
    int majorityElement(vector<int>& nums) {
         map<int,int>mpp;
         int n=nums.size();
         for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
         }
         for(auto c:mpp){
            if(c.second>n/2){
                return c.first;
            }

         }
         return -1;
    }
};