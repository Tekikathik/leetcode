class Solution {
public:
    string FrequencyCount(string s){
        vector<int> v(26,0);
        string ss="";
        for (int i=0;i<s.size();i++){
            v[s[i]-'a']++;
        }
        for (int i=0;i<v.size();i++){
            if (v[i]>0){
                ss+=(i+'a');
                ss+=(v[i]+'0');
            }
        }
        return ss;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        map<string,vector<string>> mp;
        for (int i=0;i<strs.size();i++){
            mp[FrequencyCount(strs[i])].push_back(strs[i]);
        }
        for(auto i:mp){
            result.push_back(i.second);
        }
        return result;
        
    }
};