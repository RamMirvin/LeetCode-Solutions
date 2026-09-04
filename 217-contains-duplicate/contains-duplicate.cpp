class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::set<int> seen(nums.begin(), nums.end());

        if(seen.size() != nums.size()){
            return true;
        }
        return false;
    }
};