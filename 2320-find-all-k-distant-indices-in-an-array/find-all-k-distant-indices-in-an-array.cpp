class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        set<int>ans;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==key){
                int start=max(0,j-k);
                int end=min((int)nums.size()-1,j+k);
                for(int i=start;i<=end;i++){
                    ans.insert(i);
                }
            }
        }
        return vector<int>(ans.begin(),ans.end());
    }
};