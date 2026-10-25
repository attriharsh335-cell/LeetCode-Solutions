class Solution {
public:
vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
int n = nums.size();
vector<int> harsh;
for(int i = 0; i < n; i++) {
int count = 0;
for(int j = 0; j < n; j++) {
if(nums[j] < nums[i])
count++;
}
harsh.push_back(count);
}
return harsh;
}
};
