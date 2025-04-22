class Solution {
public:
    int countGoodSubstrings(string s) {
        int count=0;
        if (s.length() < 3) return 0;
        for(int i=0;i<=s.length()-3;i++){
            char a=s[i], b=s[i+1], c=s[i+2];
            if(a!=b && b!=c && a!=c){
                count++;
            }
        }
        return count;
    }
};