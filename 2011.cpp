#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "++X" || operations[i] == "X++") {
                X++;
            } 
            else if (operations[i] == "--X" || operations[i] == "X--") {
                X--;
            }
        }
        return X;
    }
};

int main() {
    int n;
    cout << "Enter number of operations: ";
    cin >> n;

    vector<string> ops(n);
    cout << "Enter operations (like ++X, X++, --X, X--):\n";
    for (int i = 0; i < n; i++) {
        cin >> ops[i];
    }

    Solution sol;
    int result = sol.finalValueAfterOperations(ops);
    cout << "Final Value of X: " << result << endl;

    return 0;
}
