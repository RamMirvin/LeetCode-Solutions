class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::set<int> seen;

        for(int num : nums){
            seen.insert(num);
        }

        if(seen.size() != nums.size()){
            return true;
        }
        return false;
    }
};