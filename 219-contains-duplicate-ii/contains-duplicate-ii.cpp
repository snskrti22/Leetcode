class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> LI;
        for(int i =0;i<nums.size();i++){
            int num = nums[i];
            if(LI.find(num)!=LI.end()){
                    if(i-LI[num]<=k){
                        return true;
                    }
            }
            LI[num]=i;

        } return false;
    }
};