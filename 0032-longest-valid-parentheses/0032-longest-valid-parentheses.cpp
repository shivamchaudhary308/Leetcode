class Solution {
public:
    int longestValidParentheses(string s) {
        int left =0;
        int right=0;
        int size=0;
        for(char ch : s){
            if(ch=='('){
                left++;
            }
            else{
                right++;
            }
            if(left==right){
                size=max(size,2*right);
            }
            else if(left<right){
                left=0;
                right=0;
            }
        }
        // second paas 
        left=0;
        right=0;
        int size_rev=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==')'){
                right++;
            }
            else{
                left++;
            }
            if(left>right){
                left=0;
                right=0;
            }
            else if(left==right){
                size_rev=max(size_rev,2*left);
            }
        }
        return max(size,size_rev);
    }
};
// since this method is not working so we would focus on the count approch that is when ( and ) i.e. left and right when left>= right than it is valid otherwise it is not a valid one so in that case we will redeclare tthe left and right to be 0 and similar on the second paas and we will provide the two paas solution 