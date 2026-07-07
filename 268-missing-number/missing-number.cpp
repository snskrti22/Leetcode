class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=0;
        int p=0;
       for(int i =0;i<=nums.size();i++) {
       n=n+i;}
       for(int j =0;j<nums.size();j++){
        p=p+nums[j];
       } return n-p;


    }
};