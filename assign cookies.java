class Solution {
    public int findContentChildren(int[] g, int[] s) {
        int l1=g.length;
        int l2=s.length;
        if(l1==0 || l2==0){
            return 0;
        }
        else{
            Arrays.sort(g);
            Arrays.sort(s);
            int c1=0;
            int c2=0;
            while(c1<l1 && c2<l2){
                if(g[c1]<=s[c2]){
                    c1++;
                }
                c2++;
            }
            return c1;
        }
    }
}
