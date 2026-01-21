class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string rev="";
        vector<string> v;
        for (int i=0;i<nums.size();i++){
            string s=to_string(nums[i]);
            v.push_back(s);
        }
        sort(v.begin(),v.end(),[](string a , string b){
            return a+b > b+a ;
        });
        if (v[0]=="0") return "0";
        for(int i=0;i<v.size();i++){
            rev+=v[i]; 
        }
        return rev;
    }
};