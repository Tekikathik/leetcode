class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> result;
        vector<int> state(words.size(),0);
        for(int i=0;i<words.size();i++){
            for (int j=0;j<words[i].size();j++){
                state[i] += 1<<(words[i][j]-'a');
            }
        }
        int i=0;
        int j=i+1;
        while (i<j && j<words.size()){
            if (state[i]!=state[j]){
                result.push_back(words[i]);
                i=j;
                j++;
            }
            else {
                j++;
            }
        }
        cout << i << endl;
        result.push_back(words[i]);
        return result;
        
    }
};