class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        // Base case: if the vector is empty, the only subset is the empty set
        if (nums.empty()) {
            return {{}};
        }
        
        // Take the last element out to shrink the problem size
        int last = nums.back();
        nums.pop_back();
        
        // Recursively get all subsets of the remaining elements
        vector<vector<int>> subs = subsets(nums);
        
        // For each existing subset, create a new one that includes 'last'
        int n = subs.size();
        for (int i = 0; i < n; i++) {
            vector<int> new_sub = subs[i];
            new_sub.push_back(last);
            subs.push_back(new_sub);
        }
        
        return subs;
    }
};
