class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int count_single=0;
        int count_double=0;
        for(int i=0;i<nums.size();i++){
            if (nums[i]>=1 && nums[i]<=9){
                count_single+=nums[i];
            }
            else{
                count_double+=nums[i];
            }
        }
        return count_single != count_double;
    }
};