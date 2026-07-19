class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    //[1 2 3 4]
        vector<int> output(nums.size(),1);
        int prefix=1,suffix=1;
        for(int i=0;i<nums.size();i++){
            output[i]=prefix;
            prefix*=nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--){
            output[i]*=suffix;
            suffix*=nums[i];
        }
        return output;
    }
};