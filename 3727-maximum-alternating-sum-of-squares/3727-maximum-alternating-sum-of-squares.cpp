class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long>array;
        for(int i=0;i<nums.size();i++){
            // array.push_back(nums[i]*nums[i]);
            if(nums[i]<0){
                nums[i]=-(nums[i]);
            }
        }
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        
        int m=(nums.size()+1)/2;
        long long ans=0;
        for(int i=0;i<m;i++){
            long long val=(long long)nums[i]*nums[i];
            ans+=val;
        }
        for(int i=m;i<nums.size();i++){
            long long val=(long long)nums[i]*nums[i];
            ans-=val;
        }
        return ans;
        // cout<<endl;
        // int start=0;
        // int end=array.size()-1;
        // long long pos=0;
        // long long neg=0;
        // while(start<array.size()/2){
        //     pos+=array[end];
        //     neg+=array[start];
        //     start++;
        //     end--;
        // }
        // for the odd integer
        // if(start==end){
        //     pos+=array[end];
        // }
        // return pos-neg;
    }
};