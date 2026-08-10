class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
        vector<vector<int>>ans;
        solve(candidates,target,0,ds,ans);
        return ans;
    }
private:
    void solve(vector<int>&candidates,int target,int index,vector<int>&ds,vector<vector<int>>&ans){
        if(index==candidates.size()){
            if(target==0){
                ans.push_back(ds);
                return;
            }
            return;
        }
        if(candidates[index]<=target){
            ds.push_back(candidates[index]);
            solve(candidates,target-candidates[index],index,ds,ans);
            ds.pop_back();
        }
        solve(candidates,target,index+1,ds,ans);
    }
};