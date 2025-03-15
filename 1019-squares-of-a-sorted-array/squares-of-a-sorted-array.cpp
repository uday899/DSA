class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
     vector<int>ans(nums.size(),0);
      int left=0;
      int right=nums.size()-1;
      for(int i=nums.size()-1;i>=0;i--){
        if(abs(nums[left])>nums[right]){
            ans[i]=nums[left]*nums[left];
            left++;
        }
        else{
            ans[i]=nums[right]*nums[right];
            right--;
        }

      }
      return ans;
    }
};
        /*for(int i=0;i<nums.size();i++){
               nums[i]=nums[i]*nums[i];


        }
        sort(nums.begin(),nums.end());
        return nums; */

        
  