class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        sort(strs.begin(),strs.end());
        string a=strs[0];
        string b=strs[strs.size()-1];
        string ans="";
        int i=0;int j=0;
        while(i<a.size() && i<b.size() && a[i]==b[j]){
            ans+=a[i];
            i++;j++;
        }
        return ans;
        
    }
};
