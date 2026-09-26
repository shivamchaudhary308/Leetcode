class Solution {
public:
    int maxVowels(string s, int k) {

        unordered_set<char> vowel;

        string vow = "aeiou";

        for(char ch : vow) {
            vowel.insert(ch);
        }

        int count = 0;

        // First window
        for(int i = 0; i < k; i++) {
            if(vowel.count(s[i])) {
                count++;
            }
        }

        int ans = count;

        // Slide the window
        for(int i = k; i < s.size(); i++) {

            // Add new character
            if(vowel.count(s[i])) {
                count++;
            }

            // Remove character leaving the window
            if(vowel.count(s[i-k])) {
                count--;
            }

            ans = max(ans, count);
        }

        return ans;
    }
};