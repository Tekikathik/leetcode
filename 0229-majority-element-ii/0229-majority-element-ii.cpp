class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        long long c1=0,c2=0;;
        long long ele1=0,ele2=0;
        long long a=nums.size();
        for (int i=0;i<a;i++){
            if (c1==0 && nums[i]!=ele2){
                ele1=nums[i];
                c1++;
            }
            else if (c2==0 && nums[i]!=ele1){
                ele2=nums[i];
                c2++;
            }
            else if (ele1==nums[i]) c1++;
            else if (ele2==nums[i]) c2++;
            else{
                c1--;
                c2--;
            }
        }
        // cout << c1 << endl; 
        vector<int> v;
        for (int i=0;i<a;i++){
            if (nums[i]==ele1) c1++;
            else if (nums[i]==ele2) c2++;
        }
        v.push_back(ele1);
        v.push_back(ele2);
        return v;
    }
};