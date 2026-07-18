class Solution {
public:
    int bins(vector<int>& nums, int target,int start,int end){
         if(start>end){return -1;}
        int mid=start+(end-start)/2;
        if(nums[mid]== target){return mid; }
        else if(nums[mid]<=target){ return  bins(nums, target, mid+1, end);}
        else { return  bins(nums, target,start,mid-1);}
        }
    int search(vector<int>& nums, int target) {
        return bins( nums,  target, 0, nums.size()-1);
        
    }
};