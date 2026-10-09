class Solution {
public:
    vector<int> searchRange(vector<int> &nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        int a = -1;
        int b = -1;

        // FIRST BINARY SEARCH: Find the leftmost boundary (a)
        while(left <= right){
            int mid = left + (right - left) / 2;

            if(nums[mid] == target){
                a = mid;          // Record the potential start index
                right = mid - 1;  // Keep squeezing left to find an earlier start
            }
            else if(nums[mid] < target){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }

        // Reset pointers for the second search
        left = 0;
        right = nums.size() - 1;

        // SECOND BINARY SEARCH: Find the rightmost boundary (b)
        while(left <= right){
            int mid = left + (right - left) / 2;

            if(nums[mid] == target){
                b = mid;          // Record the potential end index
                left = mid + 1;   // Keep squeezing right to find a later end
            }
            else if(nums[mid] < target){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }

        return {a, b};
    }

};