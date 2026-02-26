class Solution {
    public int numSteps(String s) {
        int count=0;
        while(s.length()>1){
            if(s.charAt(s.length()-1)=='1'){
                int carry=1,i=s.length()-1;
                String p="";
                while(i>=0 || carry>0){
                    int x=(i>=0)? (int)(s.charAt(i)-'0'):0;
                    int sum=(x+carry)%2;
                    p=sum+p;
                    carry=(x+carry)/2;
                    i--;
                }
                s="";
                s+=p;
            }
            else{
                s=s.substring(0,s.length()-1);
            }
           // System.out.println(s);
            count++;
        }
        return count;
    }
}