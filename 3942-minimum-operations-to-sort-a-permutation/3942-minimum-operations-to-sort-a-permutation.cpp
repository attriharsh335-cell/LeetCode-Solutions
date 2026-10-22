class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int k=nums[0];
        bool forward = true;
        bool backward = true;
        for(int i=0;i<n;i++){
            if(nums[i]!=(k+i)%n){
                forward=false;
            }
            if(nums[i]!=(k-i+n)%n){
                backward = false;
            }

        }
        int ans = INT_MAX;
        if(forward){
            int r=(n-k)%n;
            ans = min(r,n-r+2);
        }
        if(backward){
            int r=(k+1)%n;
            ans= min(ans,1+min(r,n-r));
        }
        return ans==INT_MAX?-1:ans;
    }
};