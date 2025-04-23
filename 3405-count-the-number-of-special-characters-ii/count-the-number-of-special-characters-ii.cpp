class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int>firstupper;
        unordered_map<char,int>lastlower;
        for(int i=0;i<word.size();i++){
            char c=word[i];
            if(isupper(c)){
                if(firstupper.find(c)==firstupper.end()){
                    firstupper[c]=i;
                }
            }
            else{
             lastlower[c]=i;
            }

        }
        int count =0;
        for(char ch='a'; ch<='z'; ch++){
            char lower =ch;
            char upper=toupper(ch);
            if(lastlower.count(lower) && firstupper.count(upper)){
                if(lastlower[lower]<firstupper[upper]){
                    count++;
                }
            }
        }
        return count;
        

    }
};