#include <iostream>
#include <vector>
#include <algorithm> // for sort
#include <cmath>     // for abs
using namespace std;

class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int sum = 0;
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        for (int i = 0; i < seats.size(); i++) {
            sum += abs(seats[i] - students[i]);
        }
        return sum;
    }
};

int main() {
    int n;
    cout << "Enter number of seats/students: ";
    cin >> n;

    vector<int> seats(n), students(n);

    cout << "Enter seat positions:\n";
    for (int i = 0; i < n; i++) {
        cin >> seats[i];
    }

    cout << "Enter student positions:\n";
    for (int i = 0; i < n; i++) {
        cin >> students[i];
    }

    Solution sol;
    int result = sol.minMovesToSeat(seats, students);

    cout << "Minimum moves required: " << result << endl;

    return 0;
}