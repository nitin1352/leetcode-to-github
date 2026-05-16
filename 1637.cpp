#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        // Sort by x-coordinate
        sort(points.begin(), points.end());
        int maxarea = 0;
        for (int i = 1; i < points.size(); i++) {
            int area = points[i][0] - points[i-1][0];
            maxarea = max(area, maxarea);
        }
        return maxarea;
    }
};

int main() {
    int n;
    cout << "Enter number of points: ";
    cin >> n;

    vector<vector<int>> points(n, vector<int>(2));
    cout << "Enter " << n << " points (x y):\n";
    for (int i = 0; i < n; i++) {
        cin >> points[i][0] >> points[i][1];
    }

    Solution sol;
    int result = sol.maxWidthOfVerticalArea(points);

    cout << "Maximum width of vertical area: " << result << endl;
    return 0;
}
