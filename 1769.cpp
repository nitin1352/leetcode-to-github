#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> answer;
        int n = boxes.size();

        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = 0; j < n; j++) {
                if (boxes[j] == '1') {   // ✅ compare with character '1'
                    sum += abs(i - j);  // distance between i and j
                }
            }
            answer.push_back(sum);
        }
        return answer;
    }
};

int main() {
    Solution s;
    string boxes;

    cout << "Enter the boxes string (e.g., 110): ";
    cin >> boxes;   // ✅ user provides input at runtime

    vector<int> result = s.minOperations(boxes);

    cout << "Output: ";
    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}
