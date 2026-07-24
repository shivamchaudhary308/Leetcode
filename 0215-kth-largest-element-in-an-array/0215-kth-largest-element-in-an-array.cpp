class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        multiset<int,greater<int>> s;
        for (int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int count=0;
        for (auto x : s) {
            count++;
            if (count==k){
                return x;
            }
        }
        return -1;
    }
};