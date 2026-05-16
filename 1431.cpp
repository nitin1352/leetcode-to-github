#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int n = candies.size();
        int maxVal = candies[0];
        for(int i = 1; i < n; i++) {
            if(candies[i] > maxVal) {
                maxVal = candies[i];
            }
        }
        for(int i = 0; i < n; i++) {
            int maxcandies = candies[i] + extraCandies;
            if(maxcandies >= maxVal) result.push_back(true);
            else result.push_back(false);
        }
        return result;
    }
};

int main() {
    int n, extraCandies;
    cout << "Enter number of kids: ";
    cin >> n;

    vector<int> candies(n);
    cout << "Enter candies for each kid:\n";
    for(int i = 0; i < n; i++) {
        cin >> candies[i];
    }

    cout << "Enter extra candies: ";
    cin >> extraCandies;

    Solution sol;
    vector<bool> ans = sol.kidsWithCandies(candies, extraCandies);

    cout << "Result: ";
    for(bool b : ans) {
        cout << (b ? "true " : "false ");
    }
    cout << endl;

    return 0;
}
