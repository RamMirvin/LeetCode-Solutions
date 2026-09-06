class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int max = 0;

        for(int i : nums){
            if(count(nums.begin(), nums.end(), i) > int(nums.size()/2)){               
                return i;
            }
        }

        return max;
    }
};