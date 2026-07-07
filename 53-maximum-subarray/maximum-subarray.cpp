class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int c_sum= nums[0];
        int max_sum = nums[0];

        for(int i =1;i<nums.size();i++){
        c_sum= max(nums[i],nums[i]+c_sum);
        max_sum=max(max_sum,c_sum)  ;

        } return max_sum;
    }
};