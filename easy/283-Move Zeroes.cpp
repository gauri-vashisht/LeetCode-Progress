class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int store=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[store],nums[i]);
                store++;
            }

        }

    }
};