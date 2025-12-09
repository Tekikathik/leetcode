class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        map<int,vector<int> > mp;
        for (int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        long long MOD = 1000000007LL;
        long long result=0;
        for (long long i=1;i<nums.size()-1;i++){
            if (mp.find(nums[i]*2)!=mp.end()){
                long long c=lower_bound(mp[nums[i]*2].begin(),mp[nums[i]*2].end(),i)-mp[nums[i]*2].begin();
                // long long d=upper_bound(mp[nums[i]*2].begin(),mp[nums[i]*2].end(),i- 1)-mp[nums[i]*2].begin();
                long long d=mp[nums[i]*2].size()-c;
                if (nums[i]==0) d--;
                cout << c << " " << d << endl;
                long long  f=(c*d)%MOD;
                result=(result+f)%MOD;
            }
        }
        // cout << result;
        return result;
        
    }
};