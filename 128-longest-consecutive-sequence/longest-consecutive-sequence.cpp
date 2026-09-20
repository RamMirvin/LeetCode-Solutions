class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() < 1){
            return 0;
        }

        int c = 0;
        int max_c = 0;
        set<int> n1;
        n1.insert(nums.begin(), nums.end());

        nums.clear();
        nums.insert(nums.begin(), n1.begin(), n1.end());

        for(int i = 1; i < nums.size(); i++){
            if(nums[i - 1] == nums[i] - 1){
                c++;
            }
            else{
                c = 0;
            }

            if(c > max_c){
                max_c = c;
            }
        }

        return max_c + 1;
    }
};