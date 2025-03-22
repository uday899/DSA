class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
       int n=s.length();
       vector<int>result(n,INT_MAX);
       int lastseen=-1;
       for(int i=0;i<n;i++){
         if(s[i]==c){
            lastseen=i;
         }
         if(lastseen!=-1){
            result[i]=i-lastseen;
         }
       }
        lastseen=-1;
       for(int i=n-1;i>=0;i--){
          if(s[i]==c){
            lastseen=i;
          }
          if(lastseen!=-1){
            result[i]=min(result[i],lastseen-i);
          }
       }

     return result;

    }
};