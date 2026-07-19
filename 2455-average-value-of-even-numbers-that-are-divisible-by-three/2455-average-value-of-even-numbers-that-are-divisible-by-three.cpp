class Solution {
public:
    int averageValue(vector<int>& nums) {
        vector<int> array;
        for (int i=0;i<nums.size();i++){
            if (nums[i]%2==0){
                if (nums[i]%3==0){
                    array.push_back(nums[i]);
                }
            }
        }
        int count=0 , sum=0 ,average=1;
        if (array.size()==0){
            return 0;
        }
        else{
            for (int j=0;j<array.size();j++){
                sum+=array[j];
                // count+=1;
            }
            average=sum/array.size();
            // average=sum/count;
            
        }
        return average;
        

    }
};