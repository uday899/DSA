class Solution {
public:
    bool detectCapitalUse(string word) {
        int upper=0;
        for(char it: word){
            if(isupper(it)){
                upper++;
            }
        }
        if(upper==word.size()) return true;
        if(upper==0) return true;
        if(upper==1 && isupper(word[0])) return true; 
    return false;
    }
};