class Solution {
public:
    int compress(vector<char>& chars) {
        int read = 0 ;
        int write = 0;
        int n = chars.size();
        while(read<n){
         char ch = chars[read];
         int count = 0;

         while(read<n && chars[read]==ch){
            read++;
            count++;
         }
           chars[write++]=ch;

           if(count>1){
            string cstng = to_string(count);
            for(char digit:cstng){
                chars[write++]=digit;
            }
           }




        } return write;
    }
};