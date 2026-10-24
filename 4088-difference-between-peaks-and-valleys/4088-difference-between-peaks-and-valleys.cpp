class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int ps=0;
        int vs=0;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>nums[i-1]&& nums[i]>nums[i+1]){
                ps+=nums[i];
            }
            if(nums[i] < nums[i - 1] && nums[i] < nums[i + 1]){
                vs+=nums[i];
            }

        }
        int ds=0;
        ds=ps-vs;
        return ds;
    }
};