class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> answer;
        int c;
        for (int i=0;i<queries.size();i++){
            if ( queries[i][0] != queries[i][1]){
                c=arr[queries[i][0]];
                for (int j=queries[i][0]+1;j<=queries[i][1];j++){
                    c=c^arr[j];
                }
                answer.push_back(c);
            }
            else answer.push_back(arr[queries[i][0]]);
        }
        return answer;
        
    }
};