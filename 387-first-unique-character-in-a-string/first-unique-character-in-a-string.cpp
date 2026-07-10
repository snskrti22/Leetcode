class Solution {
public:
    int firstUniqChar(string s) {
       int count [256] = {0};
       for(int i =0;i<s.size();i++){
        count[s[i]]++;
        
       } 
        for(int j =0;j<s.size();j++){
       if(count[s[j]]==1){ return j ;}
      
    } return -1;
    
    }
};