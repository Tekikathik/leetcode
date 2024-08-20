class Solution {
public:
    string reverseVowels(string s) {
        vector<int>v;
		for(int i=0; i<s.size(); i++){
			if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='i' || s[i]=='A' || s[i]=='E' || s[i]=='O' || s[i]=='U' || s[i]=='I' ){
				v.push_back(i);
			}
		}
		if(v.size()==0){return s;}
		for(int i=0; i<v.size()/2; i++){
			swap(s[v[i]], s[v[v.size()-1-i]]);
		}
		return s;
    }
};