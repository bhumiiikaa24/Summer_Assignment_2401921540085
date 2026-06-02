class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
      long long curr=0;
      int n=nums.size();
      for(int i=0;i<k;i++){
        curr+=nums[i];
       
      }
      long long maxSum=curr;
      for(int i=k;i<n;i++){
        curr=curr+nums[i]-nums[i-k];
        maxSum=max(maxSum,curr);

      }
      return (double)maxSum/k;
        
    }
};
