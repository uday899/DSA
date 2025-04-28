class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        vector<int>firstindex(26,-1);
        int maxlen=-1;
        for(int i=0;i<s.length();i++){
              int idx= s[i]-'a';
              if(firstindex[idx]==-1){
                firstindex[idx]=i;
              }
              else{
                maxlen=max(maxlen,i-firstindex[idx]-1);
              }
        }
        return maxlen;
    }
};