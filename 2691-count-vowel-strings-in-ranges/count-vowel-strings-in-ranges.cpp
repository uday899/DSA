class Solution {
public:
     bool isvowel(char ch){  
        ch=tolower(ch);
        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
     }

     bool isvowelstring(const string& words){
        return isvowel(words.front()) &&  isvowel(words.back());
     }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n=words.size();
        vector<int>prefix(n+1,0);
        for(int i=0;i<n;i++){
            prefix[i+1]=prefix[i] + (isvowelstring(words[i]) ? 1 : 0 );
        }

        vector<int>result;
        for(auto & q:queries){
            int l=q[0] , r=q[1];
            result.push_back(prefix[r+1]-prefix[l]);
        }
         return result;
    }
};