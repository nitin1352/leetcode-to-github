#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> target;
        int i, j;
        for (i = 0; i < nums.size(); i++) {
            for (j = i + 1; j < nums.size(); j++) {
                if (nums[j] == nums[i]) {
                    target.push_back(nums[i]);
                    break; // avoid pushing duplicates multiple times
                }
            }
        }
        return target;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = sol.getSneakyNumbers(nums);

    cout << "Sneaky numbers (duplicates): ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
