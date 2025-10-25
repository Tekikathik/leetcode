class Solution {
public:
    int totalMoney(int n) {
        int c=n/7;
        int d=n%7;
        int sum=0;
        if (c!=0){
            sum+=28*c+(7*(c*(c-1)/2));
        }
        cout << sum << endl;
        int f=0;
        for(int i=c+1;f<d;i++){
            sum+=i;
            cout << i << endl;
            f++;
        }
        return sum;
        
    }
};