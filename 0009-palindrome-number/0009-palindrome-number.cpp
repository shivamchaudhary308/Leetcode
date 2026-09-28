class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        if(x==0){
            return true;
        }
        int num=x;
        long long count=0;
        while(num>0){
            count=count*10+num%10;
            num=num/10;
        }
        return count==x;
    }
};