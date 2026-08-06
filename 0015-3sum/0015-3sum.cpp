class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>array;
        for (int i=0;i<nums.size();i++){
            if (nums[i]>0) break ;  //since no negative first element so cannot become 0
            if (i>0 && nums[i]==nums[i-1])continue; //to remove the duplicates in the i iteration for the loop 
            int start=i+1;
            int end=nums.size()-1;
            while(start<end){
                int sum=nums[i]+nums[start]+nums[end];
                if (sum==0){
                    array.push_back({nums[i], nums[start], nums[end]});
                    while (start < end && nums[start] == nums[start + 1]) start++;//skip duplicate part
                    while (start < end && nums[end] == nums[end - 1]) end--;//skip duplicate part from end
                    start++;
                    end--;
                }
                else if (sum<0){
                    start++;
                }
                else{
                    end--;
                }
                // start++;
              
            }
        }
        return array;
    }
};