class Solution {
public:
    int firstUniqChar(string s) {
        int freq[128]={0};
        int cnt=0;
        for(auto c:s){
            freq[c]++;
        }
        for(int i=0;i<s.size();i++){
            if(freq[s[i]]==1){

                return i;
            }
        }
return -1;
    }
};