class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       /* unordered_set<int>set1;
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
    } */
     sort(nums1.begin(),nums1.end());
     sort(nums2.begin(),nums2.end());
     int i=0; int j=0;
     vector<int>result;
     while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]<nums2[j]){
            i++;
        }
        else if(nums1[i]>nums2[j]){
            j++;
        }
        else{
            if(result.empty() || result.back()!=nums1[i]){
                result.push_back(nums1[i]);
            }
            i++;
            j++;

        }
     }
         return result;
    }
    

    };