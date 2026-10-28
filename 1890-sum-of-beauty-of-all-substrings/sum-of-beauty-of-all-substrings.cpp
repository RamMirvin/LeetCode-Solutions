#include <string>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int beautySum(string s) {
        int totalBeauty = 0;
        int n = s.size();
        
        // Iterate over all possible starting positions of substrings
        for (int i = 0; i < n; i++) {
            // Frequency array for characters 'a' through 'z' for the current window
            vector<int> freq(26, 0);
            
            // Expand the substring window to the right
            for (int j = i; j < n; j++) {
                freq[s[j] - 'a']++;
                
                int maxFreq = 0;
                int minFreq = INT_MAX;
                
                // Find the max and min frequencies of characters present in the substring
                for (int k = 0; k < 26; k++) {
                    if (freq[k] > 0) {
                        maxFreq = max(maxFreq, freq[k]);
                        minFreq = min(minFreq, freq[k]);
                    }
                }
                
                // Add the beauty of the current substring s[i...j] to the total
                totalBeauty += (maxFreq - minFreq);
            }
        }
        
        return totalBeauty;
    }
};
