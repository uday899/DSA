class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(auto num:nums){
            freq[num]++;
        }
        int sum=0;
        for(auto it:freq){
            if(it.second==1){
                sum+=it.first;
            }
        }
        return sum;
    }
};