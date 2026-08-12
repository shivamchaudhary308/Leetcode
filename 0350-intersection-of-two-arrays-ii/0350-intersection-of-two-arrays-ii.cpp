class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int x=0;
        int y=0;
        while(x<nums1.size() && y<nums2.size()){
            if(nums1[x]==nums2[y]){
                cout<<nums1[x];
                result.push_back(nums1[x]);
                x++;
                y++;
            }
            else if(nums1[x]>nums2[y]){
                y++;
            }
            else{
                x++;
            }
        }
        return result;
    }
};