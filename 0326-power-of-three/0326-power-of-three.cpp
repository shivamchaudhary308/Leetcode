class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        int result=1;
        while(n%3==0){
            n/=3;
        }
            
        
        return n==1;
        
    }
};