class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>freq;
        for(char ch:s){
            freq[ch]++;
        }
        unordered_set<int>freqset;
        for(auto it:freq){
            freqset.insert(it.second);
        }
         if(freqset.size()==1) return true;

         return false;
    }


};