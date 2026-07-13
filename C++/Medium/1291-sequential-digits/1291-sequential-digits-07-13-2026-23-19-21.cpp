class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;

        int st = to_string(low).length();
        int ed = to_string(high).length();

        for (int len = st; len <= ed; len++) {
            for (int start = 1; start <= 9; start++) {

                if (start + len - 1 > 9)
                    break;

                int num = 0;

                for (int digit = start; digit < start + len; digit++) {
                    num = num * 10 + digit;
                }

                if (num >= low && num <= high)
                    ans.push_back(num);
            }
        }

        return ans;
    }
};