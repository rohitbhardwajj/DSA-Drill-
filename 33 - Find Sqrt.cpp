class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x; 

        int s = 1, e = x, ans = 0;

        while (s <= e) {
            long long mid = s + (e - s) / 2; 
            long long square = mid * mid;
            
            if (square == x) return mid;
            else if (square < x) {
                ans = mid; 
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return ans; 
    }
};
