class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        } else {
            long int div = 1;
            while (x > div * 10) {
                div *= 10;
            }
            while (x) {
                int right_value = x % 10;
                int left_value = x / div;
                if (right_value != left_value) {
                    return false;
                }
                x %= div;
                x /= 10;
                div /= 100;
            }
        }
        return true;
    }
};