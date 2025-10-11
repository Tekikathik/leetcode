class Solution {
public:
    long long maximumTotalDamage(vector<int>& power) {
        map<long long,long long,greater<long long>> mp;
        long long ma=INT_MIN;
        long long a=0;
        long long b=0;
        long long c=0;
        for (int i=power.size()-1;i>=0;i--){
            mp[power[i]]++;
        }
        for (auto i : mp){
            long long d=i.second*i.first;
            if (mp.find(i.first + 1) != mp.end() && mp.find(i.first + 2) != mp.end()){
                d+=c;
            }
            else if (mp.find(i.first + 1) ==mp.end() && mp.find(i.first + 2) ==mp.end()){
                d+=max(a,max(b,c));
            }
            else{
                d+=max(c,b);
            }
            cout << d << endl;
            ma=max(d,ma);
            c=max(c,b);
            b=a;
            a=d;
        }
        return ma;
        
    }
};