class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> harsh;
        for(int i=0;i<n;i++){
            harsh.push_back(nums[i]);
            harsh.push_back(nums[n+i]);

        }
        return harsh;
    }
};