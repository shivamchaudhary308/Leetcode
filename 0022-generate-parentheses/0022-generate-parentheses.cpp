class Solution {
public:
    vector<string> result;
    int n;
    bool isValid(string s) {
        int count = 0;
        for (char c : s) {
            if (c == '(') count++;
            else count--;
            if (count < 0) return false;
        }
        return count == 0;
    }
    void generate(string current) {
        if (current.size() == 2 * n) {
            if (isValid(current))
                result.push_back(current);
            return;
        }
        generate(current + '(');
        generate(current + ')');
    }
    vector<string> generateParenthesis(int n) {
        this->n = n;
        generate("");
        return result;
    }
};