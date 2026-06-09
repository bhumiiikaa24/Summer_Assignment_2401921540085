class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int n = s.size();
        int m = p.size();
        if (n < m) return ans;
        vector<int> pCount(26, 0);
        vector<int> window(26, 0);
        for (char c : p) {
            pCount[c - 'a']++;
        }
        for (int i = 0; i < n; i++) {
            window[s[i] - 'a']++;
            
            // Keep window size = m
            if (i >= m) {
                window[s[i - m] - 'a']--;
            }
            if (window == pCount) {
                ans.push_back(i - m + 1);
            }
        }
        return ans;
        
    }
};
