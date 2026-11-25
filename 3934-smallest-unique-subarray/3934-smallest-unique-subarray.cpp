class Solution {
public:
    int smallestUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        const long long mod1 = 1000000007;
        const long long mod2 = 1000000009;
        const long long base = 911382323;

        vector<long long> p1(n + 1, 1), p2(n + 1, 1);
        vector<long long> h1(n + 1, 0), h2(n + 1, 0);

        for(int i = 0; i < n; i++) {
            p1[i+1] = p1[i] * base % mod1;
            p2[i+1] = p2[i] * base % mod2;

            h1[i+1] = (h1[i] * base + nums[i]) % mod1;
            h2[i+1] = (h2[i] * base + nums[i]) % mod2;
        }

        auto check = [&](int k) {
            unordered_map<unsigned long long, int> mp;

            for(int i = 0; i + k <= n; i++) {
                long long a = (h1[i+k] - h1[i] * p1[k] % mod1 + mod1) % mod1;
                long long b = (h2[i+k] - h2[i] * p2[k] % mod2 + mod2) % mod2;

                unsigned long long key = (a << 32) | b;
                mp[key]++;
            }

            for(auto x : mp) {
                if(x.second == 1)
                    return true;
            }

            return false;
        };

        int low = 1, high = n;
        int ans = n;

        while(low <= high) {
            int mid = low + (high - low) / 2;

            if(check(mid)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};