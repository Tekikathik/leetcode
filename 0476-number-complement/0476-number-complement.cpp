class Solution {
public:
    int findComplement(int num) {
        int  binary[32],i;
        for( i=0;num>0;i++){
            binary[i]=num%2;
            num/=2;
        }
        int rev[32],k=0;
        for(int j=i-1;j>=0;j--){
           rev[k++]=binary[j];
        }
        int c=0;
        int sum=0;
        for(int k=i-1;k>=0;k--){
            // cout << rev[k] << " ";
            if (rev[k]==0){
                sum+=pow(2,c);
            }
            c++;
        }
        
        return sum;
    }
};