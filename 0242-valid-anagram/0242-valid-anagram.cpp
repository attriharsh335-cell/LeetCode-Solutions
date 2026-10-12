class Solution {
public:
    bool isAnagram(string s, string t) {
      int   freq1[128]={0};
      int  freq2[128]={0};
        for(auto c:s){
            freq1[c]++;
        }
        for(auto d:t){
            freq2[d]++;
        }
        if(s.size()!=t.size()){
            return false;
        }
        for(int i=0;i<128;i++){
            if(freq1[i]!=freq2[i]){
                return false;
            }
        }
        return true;
    }
};