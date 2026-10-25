class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        int tc=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j])
                tc++;
            }

        }
        return tc;
    }
};