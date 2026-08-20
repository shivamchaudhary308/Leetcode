class Solution {
public:
    int reverse(int x) {
        long long result = 0;
        int temp = x;
        while (temp != 0) {
            int digit = temp % 10;
            temp /= 10;
            result = result * 10 + digit;
            if (result > INT_MAX || result < INT_MIN) {
                return 0;
            }
        }
        return (int)result;
    }
};