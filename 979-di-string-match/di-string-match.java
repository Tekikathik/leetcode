class Solution {
    public int[] diStringMatch(String s) {
        int I=0,d=s.length();
        int[] arr=new int[s.length()+1];
        Arrays.fill(arr,-1);
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='I'){
                arr[i]=I++;
            }
        }
        for(int i=0;i<arr.length;i++){
            if(arr[i]==-1) arr[i]=d--;
        }
        return arr;
    }
}