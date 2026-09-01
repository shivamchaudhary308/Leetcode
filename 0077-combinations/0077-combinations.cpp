class Solution {
public:
    void combinations(vector<int> & arr,int n,int index,vector<int>& ans,vector<vector<int>>& result,int k){
        if(ans.size()==k){
            result.push_back(ans);
            return ;
        }
        if(index>=n){
            return ;
        }
        combinations(arr,n,index+1,ans,result,k);
        ans.push_back(arr[index]);
        combinations(arr,n,index+1,ans,result,k);
        ans.pop_back();
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> ans;
        vector<vector<int>> result;
        vector<int> arr(n);
        for(int i=1;i<=n;i++){
            arr[i-1]=i;
        }
        combinations(arr,n,0,ans,result,k);
        return result;
    }
};