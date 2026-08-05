class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0;
        int left=0;
        int right=height.size()-1;
        int temp=0;
        while(left<right){
            area=min(height[left],height[right])*(right-left);
            if (height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
            if (area>temp){
                temp=max(temp,area);
            }

        }
        return temp;
    }
};