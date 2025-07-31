//1512

// Number of Good Pairs
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:

    int check_equal(int x, vector<int>& nums){
        int cnt = 0;
        for(int i=0; i< x; i++){
            if(nums[i]==nums[x]){
                cnt++;
            }
        }
    return cnt;
    }

    int numIdenticalPairs(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();

        for(int x=0; x<n; x++){
            ans += check_equal(x, nums);
        }
        return ans ; 
    }
};