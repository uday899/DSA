class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mpp;
        for(auto i: arr){
            mpp[i]++;
        }
       unordered_set<int>freqset;
       for(auto value:mpp){
        freqset.insert(value.second);
       } 

        return freqset.size()==mpp.size();
    }
};