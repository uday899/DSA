class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        vector<int>result(n);
        /* vector<int>prefixsum(n);
        prefixsum[0]=nums[0];              0(n)-->extra space now i will
        for(int i=1;i<n;i++){           optimize this with out extra
            prefixsum[i]=prefixsum[i-1]+nums[i];  array by cal prefix within arr
        } */                                       
          int sum=accumulate(begin(nums),end(nums),0);
          int prefix=0;
        for(int i=0;i<n;i++){
            int leftsum=prefix;              //prefixsum[i]-nums[i];
            int rightsum =sum-prefix-nums[i];                       //prefixsum[n-1]-prefixsum[i];
            result[i]=(nums[i]*i)-leftsum + rightsum-(nums[i]*(n-i-1));
            prefix+=nums[i];
        }
        return result;
    }
};