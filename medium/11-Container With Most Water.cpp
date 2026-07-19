class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0, right = height.size()-1;
        int result=0;
        while(left<right){
            int water=min(height[left],height[right])*(right-left);
            result=max(result,water);

            if(height[left]<height[right])
                left++;
            else
                right--;
        }
        return result;
    }
};