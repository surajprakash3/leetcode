class Solution {
    public int heightChecker(int[] heights) {
        int[] y= heights.clone();
        for(int i=0;i<y.length-1;i++){
            for(int j=0;j<y.length-i-1;j++){
                if(y[j]>y[j+1]){
                    int t = y[j];
                    y[j]=y[j+1];
                    y[j+1]=t;
                    
                }
            }
        }
        int c=0;
        for(int i=0;i<heights.length;i++){
            if(heights[i]!=y[i]){
                c++;

            }
        }
        return c;
    }
}