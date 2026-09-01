class Solution {
public:
    void targetSum(vector<int>& nums, int index,
                   int target, int currentSum, int& ways) {
        if (index == nums.size()) {
            if (currentSum == target) {
                ways++;
            }
            return;
        }
        targetSum(nums, index + 1,
                  target, currentSum + nums[index], ways);
        targetSum(nums, index + 1,
                  target, currentSum - nums[index], ways);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int ways = 0;
        targetSum(nums, 0, target, 0, ways);
        return ways;
    }
};