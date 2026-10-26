class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> hitman;
        for(int i=0;i<nums.size();i++){
            hitman.push_back(nums[nums[i]]);
        }
        return hitman;
    }
};