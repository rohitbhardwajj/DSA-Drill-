#include <unordered_set>

class Solution {
public:
    bool isHappy(int n) {
        // Set to keep track of previous sums to detect cycles
        std::unordered_set<int> seen;

        // Keep calculating the sum of squares of digits until it reaches 1 or we find a cycle
        while (n != 1) {
            int sum = 0;
            
            // Calculate the sum of squares of the digits of n
            while (n > 0) {
                int last_Digit = n % 10;
                sum += last_Digit * last_Digit;
                n /= 10;
            }

            // If the sum is already in the set, we have a cycle, so return false
            if (seen.count(sum)) {
                return false;
            }

            // Add the sum to the set and continue
            seen.insert(sum);

            // Update n to the new sum
            n = sum;
        }

        // If we reach 1, it is a happy number
        return true;
    }
};
