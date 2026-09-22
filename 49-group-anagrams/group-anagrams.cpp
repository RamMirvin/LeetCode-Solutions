class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    map<array<int, 26>, vector<string>> groups;

    for (string s : strs) {
        array<int, 26> count{};

        for (char c : s) {
            count[c - 'a']++;
        }

        groups[count].push_back(s);
    }

    vector<vector<string>> ans;

    for (auto& pair : groups) {
        ans.push_back(pair.second);
    }

    return ans;
    }
};