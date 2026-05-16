#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> maxlocal(n-2, vector<int>(n-2));

        for (int i = 0; i < n-2; i++) {
            for (int j = 0; j < n-2; j++) {
                int largest = 0;
                // check the 3x3 subgrid starting at (i,j)
                for (int x = i; x < i+3; x++) {
                    for (int y = j; y < j+3; y++) {
                        largest = max(largest, grid[x][y]);
                    }
                }
                maxlocal[i][j] = largest;
            }
        }
        return maxlocal;
    }
};

int main() {
    int n;
    cout << "Enter size of square matrix (n x n): ";
    cin >> n;

    vector<vector<int>> grid(n, vector<int>(n));
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    Solution s;
    vector<vector<int>> result = s.largestLocal(grid);

    cout << "Largest local matrix:\n";
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}