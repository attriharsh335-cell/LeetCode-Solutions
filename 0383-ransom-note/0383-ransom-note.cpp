class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size()>magazine.size()){
            return false;
        }
        int freq1[128]={0};
        int freq2[128]={0};
        for(auto c:ransomNote){
            freq1[c]++;
        }
        for(auto d:magazine){
            freq2[d]++;
        }
        for(int i=0;i<128;i++){
            if(freq1[i]>freq2[i]){
                return false;
            }
        }
        return true;
    }
};