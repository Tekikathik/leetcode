class Solution {
    public int minimumChairs(String s) {
         int cnt=0,max=Integer.MIN_VALUE;
        for(char ch:s.toCharArray()){
            if(ch=='E') cnt++;
            else cnt--;
            max=Math.max(cnt,max);

        }
       return max;
    }
}