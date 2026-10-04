class Solution {
public:
    int ans(vector<int>& weights,int start,int end,int n,int days){
        while(start<end){
            int mid=start+(end-start)/2;
            int num=mid;
            int count=0;
            for(int i=0;i<n;i++){
                if(num>=weights[i]){
                    num-=weights[i];
                }
                else{
                    num=mid-weights[i];
                    count++;
                }
            }
            if(count>=days){
                start=mid+1;
            }
            else{
                end=mid;
            }
        }
        return start;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        // to ship in d days  
        int sum=0;
        int max=INT_MIN;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
            if(weights[i]>max){
                max=weights[i];
            }
        }
        // answer lies in between 1 to sum
        int n=weights.size();
        return ans(weights,max,sum,n,days);
    }
};