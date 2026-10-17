
class Solution {
public:
    int digitSum(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int, int>> a;

        for (int i = 0; i < n; i++)
            a.push_back({nums[i], i});

        sort(a.begin(), a.end(), [&](auto x, auto y) {
            int s1 = digitSum(x.first);
            int s2 = digitSum(y.first);

            if (s1 != s2)
                return s1 < s2;

            return x.first < y.first;
        });

        vector<bool> vis(n, false);
        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (vis[i] || a[i].second == i)
                continue;

            int j = i, cnt = 0;

            while (!vis[j]) {
                vis[j] = true;
                j = a[j].second;
                cnt++;
            }

            ans += cnt - 1;
        }

        return ans;
    }
};

