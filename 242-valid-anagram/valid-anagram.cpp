class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        unordered_map<int, int> mpp1;
        unordered_map<int, int> mpp2;

        if(n != t.size()){
            return false;
        }

        for(int i = 0; i < n; i++){
            mpp1[s[i] - 'a']++;
            mpp2[t[i] - 'a']++;
        }

        for(int j = 0; j < 26; j++){
            if(mpp1[j] != mpp2[j]){
                return false;
            }
        }

        return true;
    }
};