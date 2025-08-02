package newstart;

import java.util.Arrays;

class Solution {
    public int[] sortedSquares(int[] nums) {
        int l =nums.length;
        int[] res = new int[l];
        for(int i= 0; i<l; i++){
            res[i] = nums[i] * nums[i];
        }
        Arrays.sort(res);
        return res;
    }
}