class Solution {
public:
vector<vector<int>> result;
void ps(vector<int>&nums,vector<int>ans,int i ){
    if(i==nums.size()){
        result.push_back(ans);
        return;
    }
    ans.push_back(nums[i]);
    ps(nums,ans,i+1);

    ans.pop_back();
    ps(nums,ans,i+1);
}
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<int>ans;
        ps(nums,ans,0);
              return result;
    }
};