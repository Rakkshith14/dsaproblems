package newstart;

class Solution {
    public int maximumWealth(int[][] accounts) {
        int innerLength = accounts[0].length;
        int outerLength = accounts.length;
        int maxWealth = 0;

        for (int i = 0; i<outerLength; i++){
             int temp = 0;
            for (int j = 0; j<innerLength; j++){
               
                temp += accounts[i][j];
                if (temp > maxWealth){
                    maxWealth = temp;
                
                }
                
            }
        }

        
        return maxWealth;
    }

}