class Solution {
public:
    long long countSubarrays(vector<int>& harsh, int minK, int maxK) {
        long long count=0;
        long long bekar=-1;
        for(int i=0;i<harsh.size();i++){
            if(harsh[i]<minK || harsh[i]>maxK){
                bekar=i;
            }
            else{
                count+=i-bekar;
            }
        }
        return count;
    }
};