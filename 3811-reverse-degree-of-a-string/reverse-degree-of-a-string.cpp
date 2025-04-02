class Solution {
public:
    int reverseDegree(string s) {
         int total=0;
         for(int i=0;i<s.length();i++){
            int reversed=26-(s[i]-'a');
            total+=reversed*(i+1);
         }     
        return total;
    }

};