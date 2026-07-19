class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result(nums.size());
        int left = 0; int right = nums.size()-1;
        int i=nums.size()-1;
        while(left<=right){
            int ls=nums[left]*nums[left];
            int rs=nums[right]*nums[right];

            if(ls>rs){
                result[i]=ls;
                left++;
            }
            else{
                result[i]=rs;
                right--;
            }
            i--;

        }
        return result;


    }
};