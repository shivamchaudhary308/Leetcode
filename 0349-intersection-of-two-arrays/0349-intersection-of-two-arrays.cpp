class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        int m=nums1.size();
        int n=nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0;
        int j=0;
        while(i < m && j < n){
            if(nums1[i]>nums2[j]){
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                result.push_back(nums1[i]);
                i++;
                // check the overflow condition first and then the other 
                while(i<m && nums1[i]==nums1[i-1] ){
                    i++;
                }
                j++;
                while(j<n && nums2[j]==nums2[j-1]){
                    j++;
                }
            }

        }
        return result;
    }
};