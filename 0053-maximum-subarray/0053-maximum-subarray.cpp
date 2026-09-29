class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int prev_sum=nums[0];
        int maximum=nums[0];
        for(int i=1;i<nums.size();i++){
            int curr=nums[i];
            prev_sum=max(curr,prev_sum+curr);
            if(maximum<prev_sum){
                maximum=prev_sum;
            }
        }
        return maximum;
    }
};