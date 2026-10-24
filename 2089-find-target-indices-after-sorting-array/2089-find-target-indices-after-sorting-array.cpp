class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int c=0;
        int n=nums.size();
        vector<int> harsh;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                c=+i;
               harsh.push_back(c);
            }
        }
        return harsh;
        
    }
};