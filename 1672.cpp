#include <iostream>
#include <vector>
#include <algorithm> // for max
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxwealth = 0;
        for (int i = 0; i < accounts.size(); i++) {
            int sum = 0;
            for (int j = 0; j < accounts[i].size(); j++) {
                sum += accounts[i][j];
            }
            maxwealth = max(maxwealth, sum);
        }
        return maxwealth;
    }
};

int main() {
    int m, n;
    cout << "Enter number of customers: ";
    cin >> m;
    cout << "Enter number of banks per customer: ";
    cin >> n;

    vector<vector<int>> accounts(m, vector<int>(n));
    cout << "Enter wealth values (customer × bank):\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> accounts[i][j];
        }
    }

    Solution sol;
    int result = sol.maximumWealth(accounts);
    cout << "Maximum wealth among customers = " << result << endl;

    return 0;
}
