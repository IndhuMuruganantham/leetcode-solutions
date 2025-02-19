class Solution {
    public int mostWordsFound(String[] sentences) {
        int m=0;
        for(String s:sentences){
            String[] w=s.split(" ");
            int l=w.length;
            if(m<l){
                m=l;
            }
        }
        return m;
    }
}
