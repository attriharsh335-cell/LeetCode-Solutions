class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int harsh=0;
       for(int i=0;i<n;i++){
        harsh=harsh^nums[i];
       }
       return harsh;
    }
};