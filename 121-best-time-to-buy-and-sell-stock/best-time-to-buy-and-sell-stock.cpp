class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff = 0;
        int min = prices[0];

        for(int i = 1; i < prices.size(); i++){
            if(prices[i] < min){
                min = prices[i];
            }
            else{
                diff = max(diff, prices[i] - min);
            }
        }
        return diff;
    }
};