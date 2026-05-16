#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> target;
        int i = 0;

        // Elements less than pivot
        for (i = 0; i < nums.size(); i++) {
            if (nums[i] < pivot) {
                target.push_back(nums[i]);
            }
        }

        // Elements equal to pivot
        for (i = 0; i < nums.size(); i++) {
            if (nums[i] == pivot) {
                target.push_back(nums[i]);
            }
        }

        // Elements greater than pivot
        for (i = 0; i < nums.size(); i++) {
            if (nums[i] > pivot) {
                target.push_back(nums[i]);
            }
        }

        return target;
    }
};

int main() {
    Solution sol;
    int n, pivot;

    // Input size
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    // Input elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Input pivot
    cout << "Enter pivot value: ";
    cin >> pivot;

    // Call function
    vector<int> result = sol.pivotArray(nums, pivot);

    // Output result
    cout << "Pivoted Array: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
