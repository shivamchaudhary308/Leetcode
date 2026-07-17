class Solution {
public:
    int getLucky(string s, int k) {
        // Step 1: Convert each letter to its position and build number string
        string numStr = "";
        for (char c : s)
            numStr += to_string(c - 'a' + 1);

        // Step 2: Sum all digits of the number string
        int sum = 0;
        for (char c : numStr)
            sum += c - '0';

        // Step 3: Apply digit sum k-1 more times
        for (int i = 1; i < k; i++) {
            int next = 0;
            while (sum > 0) {
                next += sum % 10;
                sum /= 10;
            }
            sum = next;
        }

        return sum;
    }
};