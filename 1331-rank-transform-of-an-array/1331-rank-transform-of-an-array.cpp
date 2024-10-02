class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> v,ans;
        v=arr;
        int c=1;
        if (v.size()==0) return {};
        unordered_map<int,int> ma;
        sort(v.begin(),v.end());
        ma[v[0]]=c;
        for(int i=1;i<arr.size();i++){
            if (v[i]==v[i-1]){
                ma[v[i]]=c;
            }
            else{
            c++;
            ma[v[i]]=c;
            }
        }
        for(int i=0;i<v.size();i++){
            ans.push_back(ma[arr[i]]);
        }
        return ans;
    }
};