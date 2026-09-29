// this is the problme of the boyre moore algorithm advanced form 
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>arr;
        int elem_1=0;
        int elem_2=0;
        int count_1=0;
        int count_2=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==elem_1){
                count_1++;
            }
            else if(nums[i]==elem_2){
                count_2++;
            }
            else if(count_1==0){
                elem_1=nums[i];
                count_1++;
            }
            else if(count_2==0){
                elem_2=nums[i];
                count_2++;
            }
            else{
                count_1--;
                count_2--;
            }
        }
        // new traversal to check no of occ of elem_1 and elem_2
        count_1=0;
        count_2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==elem_1){
                count_1++;
            }
            else if(nums[i]==elem_2){
                count_2++;
            }
        }
        if(count_1>n/3){
            arr.push_back(elem_1);
        }
        if(count_2>n/3){
            arr.push_back(elem_2);
        }
        return arr;
    }
};
