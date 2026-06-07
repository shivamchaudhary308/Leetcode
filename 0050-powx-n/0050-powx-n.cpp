class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;
        double result = 1.0;
        if (N>0){
            x=x;
        }
        else{
            x=1/x;
            N=-N;
        }
        while (N>0){
            if (N%2!=0){
                result *= x;
            }
            x*=x;
            N/=2;
        }
        // while (N<0){
        //     if (N%2!=0){
        //         result *= (1/x);
        //     }
        //     x*=x;
        //     N/=2;
        // }

        return result;
    }
};