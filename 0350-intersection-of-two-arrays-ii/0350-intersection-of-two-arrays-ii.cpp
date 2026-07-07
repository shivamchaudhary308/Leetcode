class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>array;
         vector<bool> used(nums2.size(), false);
        for (int i=0;i<nums1.size();i++){
            for (int j=0;j<nums2.size();j++){
                 if (!used[j] && nums1[i] == nums2[j]) {
                    array.push_back(nums2[j]);
                    used[j] = true;  
                    break;
                }
            }
            
        }
        // array.erase(unique(array.begin(),array.end()),array.end());
        return array;
    }
};