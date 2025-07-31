// 1854. Maximum Population Year
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
   int maximumPopulation(vector<vector<int>>& logs) {
        int year_population[101] = {0};  // From year 1950 to 2050

        // Mark population changes
        for (const auto& log : logs) {
            int birth = log[0], death = log[1];
            year_population[birth - 1950] += 1;
            year_population[death - 1950] -= 1;
        }

        int max_pop = 0;
        int max_year = 1950;
        int current_pop = 0;

        // Compute prefix sum and track the year with max population
        for (int i = 0; i < 101; ++i) {
            current_pop += year_population[i];
            if (current_pop > max_pop) {
                max_pop = current_pop;
                max_year = 1950 + i;
            }
        }

        return max_year;

        
    }
};