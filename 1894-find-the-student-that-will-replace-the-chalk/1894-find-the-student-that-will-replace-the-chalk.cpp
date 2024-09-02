class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long sum=0;
        for (int i=0;i<chalk.size();i++){
            sum+=chalk[i];
        }
        if (k%sum==0) return 0;
        int c=k%sum;
        for (int i=0;i<chalk.size();i++){
            if (c>=chalk[i]){
                c-=chalk[i];
            }
            else return i;
        }
        return 0;
        
        
    }
};