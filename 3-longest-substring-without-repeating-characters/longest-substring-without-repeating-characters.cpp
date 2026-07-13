class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>Li(256,-1);
        int left =0;
        int maxlen = 0;
          for(int i =0 ; i< s.size();i++){
             char c = s[i];
             if(Li[c]>=left){
                left = Li[c]+1;
             }
              Li[c]=i;
             maxlen= max(maxlen,i-left+1);

          }
          return maxlen;
    }
};