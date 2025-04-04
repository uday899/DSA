class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
         int leftsum=0;
         int rightsum=0;
          for(int sum:nums){
            rightsum+=sum;
          }
          for(int i=0;i<nums.size();i++){
            int val=nums[i];
            rightsum-=val;
            nums[i]=abs(leftsum-rightsum);
            leftsum+=val;
          }
           return nums;
        }

    
};