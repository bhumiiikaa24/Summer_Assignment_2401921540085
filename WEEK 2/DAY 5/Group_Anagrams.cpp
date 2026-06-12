class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp; //key=sorted string , value=all strings having the same sorted form
        vector<vector<string>>ans;
        for(string str:strs){
            string temp=str;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(str);
        }
        for(auto pair:mp){
            ans.push_back(pair.second);
        }
        return ans;

        
    }
};
