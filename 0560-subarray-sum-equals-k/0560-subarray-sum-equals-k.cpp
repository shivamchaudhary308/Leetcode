class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        for(int start=0;start<nums.size();start++){
            int sum=0;
            for(int i=start;i<nums.size();i++){
                sum+=nums[i];
                if(sum==k){
                    count++;
                }
            }
        }
        return count;
    }
};