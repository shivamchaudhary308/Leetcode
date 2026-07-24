class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>final;
        for (int i=0;i<nums1.size();i++){
            final.push_back(nums1[i]);
        }
        for (int j=0;j<nums2.size();j++){
            final.push_back(nums2[j]);
        }

        sort(final.begin(),final.end());
        int n=final.size();
        double num;
        if (n%2==0){
            num=(double)(final[n/2-1]+final[n/2])/2.0;
        }
        else{
            num=final[n/2];
        }
        // for (int j=0;j<final.size();j++){
        //     cout<<final[j];
        // }
        return num;
    }
};
// nums1 size m
// nums2 size n    to return median of two sorted array
