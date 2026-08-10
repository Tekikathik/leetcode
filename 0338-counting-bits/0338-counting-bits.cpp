class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> arr(n+1,0);
        arr[0]=0;
        int c=0;
        for (int i=1;i<=n;i++){
            int x=i;
            while (x!=0){
                if ((x&1)!=0) c++;
                x=x>>1;
            }
            arr[i]=c;
            c=0;
        }
        return arr;
        
    }
};