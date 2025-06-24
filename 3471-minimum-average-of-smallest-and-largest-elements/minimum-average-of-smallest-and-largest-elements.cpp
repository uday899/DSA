class Solution {
public:
    double minimumAverage(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int i=0;
       int j=nums.size()-1;
       vector<double>averages;
       while(i<j){
        double avg = (nums[i]+nums[j])/2.0;
        averages.push_back(avg);
        i++;
        j--;
       }
       return *min_element(averages.begin(),averages.end());
    }
};