class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        // subset is found by 2^n where n is no of element 
        vector<vector <int>> result;
        result.push_back({}); //empty subset
        for (int num: nums){
            int size=result.size();
            for (int i=0;i<size;i++){
                vector<int> subset =result[i];
                subset.push_back(num);
                result.push_back(subset);
            }
        }
        return result;
        // int index;
        // if (index==nums.size()){
        //     for (auto it :ds){
        //         cout<<it<<" ";
        //     }
        //     cout<<endl;
        //     return ;
        // }
        // array.push_back(arr[index]);

        
    }
};