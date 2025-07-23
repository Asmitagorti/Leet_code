class Solution {
    public int scoreOfString(String s) {
        int len=s.length()-1;
        int sum=0;
        int i=0;
        while(i<len){
            sum+=Math.abs(s.charAt(i)-s.charAt(i+1));
            i++;
        }
        return sum;
    }
}