class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int max_sum = nums[0];
        
        for(int i = i; i < nums.size(); i++){
            sum = max(nums[i], sum + nums[i]);
            max_sum = max(sum, max_sum);
        }

        return max_sum;
    }
};