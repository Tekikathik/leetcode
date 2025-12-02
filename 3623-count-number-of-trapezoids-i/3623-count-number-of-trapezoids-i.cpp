class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        unordered_map<int,long long> mp;
        for (auto &pt : points) mp[pt[1]]++;

        vector<long long> v;
        for (auto &p : mp) {
            long long k = p.second;
            if (k > 1) v.push_back( (k * (k - 1)) / 2 ); // nC2, integer math
        }

        if (v.size() < 2) return 0; // nothing to pair

        const long long MOD = 1000000007LL;
        int m = (int)v.size();
        vector<long long> suffix(m + 1, 0); // suffix[m] = 0
        for (int i = m - 1; i >= 0; --i) {
            suffix[i] = (suffix[i + 1] + (v[i] % MOD)) % MOD;
        }

        long long c = 0;
        for (int i = 0; i < m - 1; ++i) {
            c = (c + (v[i] % MOD) * suffix[i + 1]) % MOD;
        }

        return (int)c;
    }
};
