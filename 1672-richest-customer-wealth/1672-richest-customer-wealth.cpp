class Solution {
public:
    int maximumWealth(vector<vector<int>>& acc) {
        int hitman=0;
        for(auto a:acc){
            int sum=0;
            for(auto h:a){
                sum+=h;
            }
            hitman=max(hitman,sum);
        }
        return hitman;
    }
};