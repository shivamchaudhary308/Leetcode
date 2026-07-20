class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n= nums.size();
        vector <int> array(2*n);
        for (int i=0;i<2*n;i++){
            array[i]=nums[i%n];
        }
        return array;
    }
};