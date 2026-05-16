#include <iostream>
#include <vector>
#include <algorithm>  // for reverse
using namespace std;

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftsum;
        vector<int> rightsum;
        vector<int> answer;
        int sum = 0;
        int n = nums.size();

        // Build leftsum
        leftsum.push_back(sum);
        for (int i = 0; i < n - 1; i++) {
            sum += nums[i];
            leftsum.push_back(sum);
        }

        // Build rightsum
        sum = 0;
        for (int i = n - 1; i >= 0; i--) {
            rightsum.push_back(sum);
            sum += nums[i];
        }
        reverse(rightsum.begin(), rightsum.end());

        // Build answer
        for (int i = 0; i < n; i++) {
            answer.push_back(abs(leftsum[i] - rightsum[i]));
        }

        return answer;
    }
};

int main() {
    Solution s;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = s.leftRightDifference(nums);

    cout << "Output: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
