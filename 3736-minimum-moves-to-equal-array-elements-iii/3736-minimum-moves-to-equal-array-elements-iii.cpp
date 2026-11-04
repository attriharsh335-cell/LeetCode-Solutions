class Solution {
public:
    int minMoves(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        int h=*max_element(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
           count+=h-nums[i]; 
        }
        return count;
    }
};