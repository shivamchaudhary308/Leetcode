class Solution {
public:
    bool isHappy(int n) {
        auto sumsquare=[](int n){
            int sum=0;
            while (n){
                int d=n%10;
                sum+=d*d;
                n/=10;
            }
            return sum;
        };
        int slow=n;
        int fast=n;
        do {
            slow=sumsquare(slow);
            fast=sumsquare(sumsquare(fast));
        }
        while(slow != fast);{
            return slow==1;
        }
        
    }
};