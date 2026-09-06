class Solution {
public:
    int singleNumber(vector<int>& nums) {
        set<int> num = {nums.begin(), nums.end()};

        for(int i : num){
            if(num.count(i) == count(nums.begin(), nums.end(), i)){
                return i;
            }
        }

        return 1;
    }
};