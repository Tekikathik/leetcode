class Solution {
public:
    int countCollisions(string directions) {
        string v="";
        int c=0;
        int f=0;
        for (int i=0;i<directions.size()-1;i++){
            if (directions[i]=='R'&& directions[i+1]=='L'){
                c+=2;
                i++;
                v.push_back('C');
                f=1;
            }
            else {
                v.push_back(directions[i]);
                f=0;
            }
        }
        if (directions.size() > 2){
            if ((directions[directions.size()-2]=='L' && directions[directions.size()-1]=='L') ||
            (directions[directions.size()-2]=='R' && directions[directions.size()-1]=='R') ||
            (directions[directions.size()-2]=='L' && directions[directions.size()-1]=='R') ||
            (directions[directions.size()-2]=='S' && directions[directions.size()-1]=='L') ||
            (directions[directions.size()-2]=='S' && directions[directions.size()-1]=='R') ||
            (directions[directions.size()-1]=='S')){
                v.push_back(directions[directions.size()-1]);
            }
        }
        cout << v << endl;
        int d=0;
        for(int i=0;i<v.size();i++){
            if (v[i]=='R'){
                d++;
            }
            else {
                c+=d;
                d=0;
            }
        }
        // c+=d;
        d=0;
        // cout << v ;
        for(int i=v.size()-1;i>=0;i--){
            if (v[i]=='L'){
                d++;
            }
            else {
                c+=d;
                d=0;
            }
        }
        d+=c;
        // cout << d << endl;
        return c;
    }
    // 
};