class Solution {
public:
long long maxAlternatingSum(vector<int>& nums) {
sort(nums.begin(), nums.end(), [](int a, int b) {
return abs(a) < abs(b);
});


    long long sum = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        long long x = nums[i];
        if (i < n / 2)
            sum -= x * x;
        else
            sum += x * x;
    }

    return sum;
}


};
