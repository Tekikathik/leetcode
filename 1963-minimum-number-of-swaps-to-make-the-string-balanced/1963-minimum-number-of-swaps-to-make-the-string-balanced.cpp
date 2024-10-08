class Solution {
public:
    int minSwaps(string s){
       stack<char> parens;
        int swaps = 0;
        for(char &paren : s){
            if(paren == '[') parens.push(paren);
            
            else {
                if(parens.empty()) swaps++;
                
                else parens.pop();
            }
        }
        return swaps - (swaps / 2);
    }
};