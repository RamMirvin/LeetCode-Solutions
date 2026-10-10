class Solution {
public:
    int mySqrt(int x) {
        long long int left = 0;
        int right = x / 2 + 1;

        while(left <= right){
            long long int curr = left * left;

            if(curr == x){
                return left;
            }
            else if(curr < x){
                left++;
            }
            else if(curr > x){
                return left - 1;
            }
        }

        return left;
    }
};