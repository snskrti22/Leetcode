class Solution {
public:
    bool isAnagram(string s, string t) {
          if(s.size()!=t.size()){return false;}
        int freq[26]={0};
        for(int i =0;i<s.size();i++){
            char ch = s[i];
            freq[ch-'a']++;
        }
        for(int j =0;j<t.size();j++){
            char ch = t[j];
            freq[ch-'a']--;
        }
        
        for(int k =0;k<26;k++){
            if(freq[k]!=0){
                return false;
            }
        }
        return true;
    }
};