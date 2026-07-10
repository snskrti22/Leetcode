class Solution {
public:
    bool isSubsequence(string s, string t) {
     int j = 0;
     if(s.size()>t.size()) return false;

        for(int i =0;i<t.size()&& j<s.size();i++){
               if(t[i]==s[j]){
                j++;
               }

     }   return j==s.size();
    }
};