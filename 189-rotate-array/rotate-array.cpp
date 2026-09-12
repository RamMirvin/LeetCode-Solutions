class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        deque<int> num;
        num.assign(nums.begin(), nums.end());

        for(int i = 0; i < k; i++){
            num.push_front(num[num.size() - 1]);
            num.pop_back();
        }

        nums.assign(num.begin(), num.end());

        return;
    }
};