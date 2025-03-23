class Solution {
public:
    int countBinarySubstrings(string s) {
        int current=1;
        int prev=0;
        int result=0;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]){
                current++;
            }
            else{
               result+= min(current,prev); 
               prev=current;
               current=1;

            }
        }
        result+=min(current,prev);
        return result;
    }
};