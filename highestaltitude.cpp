#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    
    int prefix_sum(vector<int>& gain) {
        int n = gain.size();
        vector<int> sum(n + 1, 0);  
         int maxx = sum[0];
        
        for (int i = 1; i <= n; i++) {
            sum[i] = sum[i - 1] + gain[i - 1];
            if (sum[i] > maxx) {
                maxx = sum[i];
            }
            
        }

        return maxx;
    }
};