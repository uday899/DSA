class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>set1;
        for(int n:nums1){
            set1.insert(n);
        }
        unordered_set<int>result;
        for(int num : nums2){
            if(set1.find(num)!=set1.end()){
                result.insert(num);
            }

        }
       return  vector<int>(result.begin(),result.end());
    }
};