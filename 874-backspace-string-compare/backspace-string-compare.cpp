class Solution {
public:
 string compare(string str){
    stack<char>st;
    for(char c:str){
        if( c=='#'){
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            st.push(c);
        }
    }
    string ans="";
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    return ans;
     

 }

    bool backspaceCompare(string s, string t) {
        return compare(s)==compare(t);
    }
};