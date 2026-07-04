class Solution {
public:
    bool isPalindrome(string s) {
        string new_str="";
        for (char c :s){
            if(isalnum(c)){
                new_str += tolower(c);
            }
        }
        // cout<<new_str;
        // checking for the pallindrome number
        int left = 0;
        int right=new_str.size()-1;
        while(left<right){
            if (new_str[left]!=new_str[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
        
        
    }
};