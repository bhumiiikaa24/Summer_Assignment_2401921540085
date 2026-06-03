class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int left=0,right=nums.size()-1;
        int i=nums.size()-1;
        vector<int>ans(n);
        while(left<=right){
            if(abs(nums[left])> abs(nums[right])){
                ans[i]=nums[left]*nums[left];
                left++;
            }
            else{
                ans[i]=nums[right]*nums[right];
                right--;
            }
            i--;
        }
        return ans;
        
    }
};
