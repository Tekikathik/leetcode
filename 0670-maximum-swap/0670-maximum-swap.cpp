class Solution {
public:
std::vector<int> convert(int n) { 
    std::vector<int> digits; 
    std::string str = std::to_string(n); 
    for (char digit : str) { 
        digits.push_back(digit - '0');  // Convert char to int 
    } 
    return digits; 
} 
    int maximumSwap(int num) {
        // vector<int> v;
        string v=to_string(num);
        int maxelement=v[v.size()-1];
        int s1=-1,s2=-1;
        int c=v.size()-1;
        for(int i=v.size()-2;i>=0;i--){
            if (v[i] > maxelement){
                maxelement=v[i];
                c=i;
            }
            else if (v[i] < maxelement){
                s1=i;
                s2=c;
            }
        }
        if (s1 !=-1){
            char temp=v[s1];
            v[s1]=v[s2];
            v[s2]=temp;
        }
        return stoi(v);
    }
};