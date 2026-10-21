class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int curr = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                curr += 1;
            }
            else if(s[i] == ')'){
                curr -= 1;
            }

            count = max(count, curr);
        }

        return count;
    }
};