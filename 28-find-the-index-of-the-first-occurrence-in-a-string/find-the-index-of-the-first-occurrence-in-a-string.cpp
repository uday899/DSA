class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        if (needle == haystack) return 0;

        if(m==0){
            return 0;
        }
        for(int i=0;i<=n-m;i++){
            if(haystack.substr(i,m)==needle){
                return i;
            }
        }
        return -1;
    }
      
};