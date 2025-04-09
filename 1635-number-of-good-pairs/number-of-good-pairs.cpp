class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
          /* int result=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    result++;
                }
            }
        }
        return result;
    }*/
    
    int n=nums.size();
    int result=0;
    unordered_map<int,int>mpp;
    for( int &num:nums){
        result+=mpp[num];
        mpp[num]++;
    }

      return result;
}
};