class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2){
        string r="";
        unordered_map<string,int> ans;
        for (auto i:s1){
            if (i==' '){
                ans[r]++;
                r="";
            }
            else r+=i;
        }
        ans[r]++;
        r="";
        for (auto i:s2){
            if (i==' '){
                ans[r]++;
                r="";
            }
            else  r+=i;
        }
        ans[r]++;
        vector<string> a;
        for(auto i:ans){
            if (i.second ==1) a.push_back(i.first);
        }
        return a;
        
    }
};