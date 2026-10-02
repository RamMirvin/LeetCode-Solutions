class Solution {
public:
    int reversePairs(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        int rev = 0;
        int n = nums.size();
        
        // Bottom-up Merge Sort: Subarray sizes double each iteration (1, 2, 4, 8...)
        for (int size = 1; size < n; size *= 2) {
            for (int left = 0; left < n; left += 2 * size) {
                int mid = min(left + size - 1, n - 1);
                int right = min(left + 2 * size - 1, n - 1);
                
                if (mid >= right) continue; // No right half to merge
                
                // 1. Count valid reverse pairs across the sorted halves
                int j = mid + 1;
                for (int i = left; i <= mid; i++) {
                    while (j <= right && nums[i] > 2LL * nums[j]) {
                        j++;
                    }
                    rev += (j - (mid + 1));
                }
                
                // 2. In-place merge process using a temporary container
                vector<int> temp;
                int p1 = left, p2 = mid + 1;
                
                while (p1 <= mid && p2 <= right) {
                    if (nums[p1] <= nums[p2]) {
                        temp.push_back(nums[p1++]);
                    } else {
                        temp.push_back(nums[p2++]);
                    }
                }
                
                while (p1 <= mid) temp.push_back(nums[p1++]);
                while (p2 <= right) temp.push_back(nums[p2++]);
                
                // Copy sorted subarray back to the original vector
                for (int i = left; i <= right; i++) {
                    nums[i] = temp[i - left];
                }
            }
        }
        
        return rev;
    }

};