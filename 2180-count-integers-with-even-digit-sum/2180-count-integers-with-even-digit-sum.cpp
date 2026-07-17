class Solution {
public:
    int digit_sum(int num) {
        int sum=0;
        while(num>0){
            sum+=num%10;
            num=num/10;
        }
        return sum;
    }
    int countEven(int num){
        int count=0;
        for (int i=1;i<=num;i++){
            if (digit_sum(i)%2==0){
                count++;
            }
        }
        return count;
    }
};