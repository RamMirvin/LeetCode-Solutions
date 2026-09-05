class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int count1[1001] = {0};
        int count2[1001] = {0};
        vector<int> fin;

        for(int i : nums1){
            count1[i]++;
        }

        for(int i: nums2){
            count2[i]++;
        }

        for(int j = 0; j <1001; j++){
            if(count1[j] > 0 && count2[j] > 0){
                fin.emplace_back(j);
            }
        }

        return fin;
    }
};