class Solution {
public:
    string convert(string s, int numRows){
        if (numRows==1) return s;
        vector<int> v(s.size(),0);
        int c=0;
        int d=1;
        map<int,string> mp;
        for (int i=0;i<s.size();i++){
            if (d>numRows){
                c=1;
                d-=2;
                v[i]=d;
                d--;
            }
            else if (d==0){
                c=0;
                d+=2;
                v[i]=d;
                d++;
            }
            else if (c==1 && d>=1) {
                v[i]=d;
                d--;
            }
            else if (c==0 && d<=numRows){
                v[i]=d;
                d++;
            }
            cout << v[i] << endl;
        }   
        for (int i=0;i<s.size();i++){
            mp[v[i]].push_back(s[i]);
        }
        string ss="";
        for (auto i:mp){
            // cout << i.first << endl;
            ss+=i.second;
        }
        return ss;
    }
};