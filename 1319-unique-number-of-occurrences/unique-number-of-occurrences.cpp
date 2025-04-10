class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
      unordered_map<int,int>freq;
      for(int num:arr){
        freq[num]++;
      }
    unordered_set<int>freqset;
    for(auto it:freq){
        freqset.insert(it.second);

    }
    return freq.size()==freqset.size();
    }
};