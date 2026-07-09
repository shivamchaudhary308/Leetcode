class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
       int count =0;
       for (auto& op : operations){
            if (op[1]=='+'){
                count++;
            }
            else{
                count--;
            }
       } 
       return count;
    }
};