class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx = *max_element(candies.begin(), candies.end());
        vector<bool> harsh;

    for (int i = 0; i < candies.size(); i++){
         harsh.push_back(candies[i] + extraCandies >= mx);
    }
       

        return harsh;
    }
};