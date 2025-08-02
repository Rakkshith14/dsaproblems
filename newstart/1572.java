package newstart;


class Solution {
    public int diagonalSum(int[][] mat) {
        int l = mat.length;
        int count1 = 0;
        int count2 = 0;
        for(int i=0; i<l; i++){
            count1 += mat[i][i];
            count2 += mat[i][l-1-i];
            if(i == l-1-i){
                count2 = count2 - mat[i][l-1-i];
            }
        }
        return count1 + count2; 
    }

}