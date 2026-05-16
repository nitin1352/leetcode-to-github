#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count = 0;
        for (int i = 0; i < hours.size(); i++) {
            if (hours[i] >= target) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution s;
    int n, target;

    cout << "Enter number of employees: ";
    cin >> n;

    vector<int> hours(n);
    cout << "Enter working hours of employees: ";
    for (int i = 0; i < n; i++) {
        cin >> hours[i];
    }

    cout << "Enter target hours: ";
    cin >> target;

    int result = s.numberOfEmployeesWhoMetTarget(hours, target);

    cout << "Number of employees who met the target = " << result << endl;

    return 0;
}
