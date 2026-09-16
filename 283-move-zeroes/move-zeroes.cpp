class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size() < 2){
            return;
        }

        int c = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                c++;
            }
        }
        
        erase(nums, 0);
        nums.insert(nums.end(), c, 0);

        for(auto &it : nums){
            cout << it << " ";
        }

        cout << endl;
    }
};