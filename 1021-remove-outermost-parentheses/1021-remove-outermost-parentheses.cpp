class Solution {
public:
    string removeOuterParentheses(string s) {
        stack <char> bracket;
        string str="";
        for (char ch: s){
            if (ch=='('){
                if (!bracket.empty()) str+=ch;
                bracket.push(ch);
            }
            else{
                bracket.pop();
                if (!bracket.empty()) str+=ch;
            }
        }
        return str;
    }
};