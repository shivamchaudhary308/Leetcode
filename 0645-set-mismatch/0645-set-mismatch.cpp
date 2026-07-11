class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());  
        
        int duplicate = -1;
        int missing = -1;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i+1]) {
                duplicate = nums[i];
                break;
            }
        }  
        int n=nums.size();
        int expected = n * (n+1) / 2;
        int actual = 0;
        for (auto& num : nums) actual += num;
        missing = expected - actual + duplicate;
        
        return {duplicate, missing};
    }
};