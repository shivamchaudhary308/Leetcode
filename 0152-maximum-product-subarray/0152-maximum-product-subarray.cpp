class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int curr_max=nums[0];
        int max_prod=nums[0];
        int min_prod=nums[0];
        for(int i=1;i<n;i++){
            int curr=nums[i];
            int max_product=max_prod;
            int min_product=min_prod;
            max_product*=curr;
            min_product*=curr;
            max_prod=max({curr,max_product,min_product});
            min_prod=min({curr,max_product,min_product});
            curr_max=max(curr_max,max_prod);
        }
        return curr_max;
    }
};
// it can be the same as the kadanes algorithm advanced form 
// new max can become max and new min can also become max by multiplying by -