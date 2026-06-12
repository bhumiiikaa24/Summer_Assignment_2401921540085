class Solution {
public:
    string ans= "";
    bool isPallindrome(string &s,int i ,int j){
        if(i>=j) return true ;
        if(s[i]!= s[j]) return false;
        return isPallindrome(s,i+1,j-1);
    }
    string longestPalindrome(string s) {
        int n=s.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(isPallindrome(s,i,j)){
                    if(j-i+1>ans.size()){
                        ans=s.substr(i,j-i+1);
                    }
                }
            }
            
        }
        return ans;
    }
};
