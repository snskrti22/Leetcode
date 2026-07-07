class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mins = prices[0] , res = 0;
        for(int i =0;i<prices.size();i++){
         mins= min(mins,prices[i]);
         res= max(res,prices[i]-mins);
        } return res;
    }
};