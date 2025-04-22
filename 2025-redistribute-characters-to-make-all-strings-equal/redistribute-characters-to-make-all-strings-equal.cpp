class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n=words.size();
        unordered_map<char,int>mpp;
        for(const string &word : words){
            for(char c:word){
                mpp[c]++;
            }
        }
       for(auto it:mpp){
        if(it.second % n!=0 ) {
            return false;
        }
       }
       return true;
    }
};