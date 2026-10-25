class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=nums[0];
        vector<int> harsh;
        harsh.push_back(sum);
        for(int i=1;i<nums.size();i++){
            sum += nums[i];
            harsh.push_back(sum);
        }
        return harsh;

    }
};