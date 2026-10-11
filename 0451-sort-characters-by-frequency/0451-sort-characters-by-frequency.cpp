
class Solution {
public:
    string frequencySort(string s) {
        int freq[128] = {0};

        for(auto c : s)
            freq[c]++;

        string res;

        while(res.size() < s.size()) {
            int mx = 0;
            for(int i = 0; i < 128; i++) {
                if(freq[i] > freq[mx])
                    mx = i;
            }

            while(freq[mx] > 0) {
                res += char(mx);
                freq[mx]--;
            }
        }

        return res;
    }
};

