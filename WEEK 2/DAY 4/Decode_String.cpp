class Solution {
public:
    string decodeString(string s) {
        stack<int>st;
        stack<string>st1;
        string sb;
        int n=0;
        for(char c:s){
            if(isdigit(c)){
                n=n*10+(c-'0');
            }
            else if(c=='['){
                st.push(n);
                n=0;
                st1.push(sb);
                sb="";
            }else if(c==']'){
                int k=st.top();
                st.pop();
                string temp=sb;
                sb=st1.top();
                st1.pop();
                for(int i=0;i<k;i++){
                    sb+=temp;
                }
            }else{
                sb+=c;
            }
        }
        return sb;
        
    }
};
