class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0;
        for(int j=i+1;j<n;j++){
            if(nums[i]==nums[j]){
                return true;
            }
            else{
                i++;
            }
        }
        return false;
        
    }
};
