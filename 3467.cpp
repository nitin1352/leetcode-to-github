#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n = nums.size();
        int i, j, temp, stop;

        // Replace 
        for (i = 0; i < n; i++) {
            if (nums[i] % 2 == 0) {
                nums[i] = 0;
            } else {
                nums[i] = 1;
            }
        }

        // Bubble Sort
        for (i = 0; i < n - 1; i++) {
            stop = 0; 
            for (j = 0; j < n - 1 - i; j++) {
                if (nums[j] > nums[j + 1]) {
                    temp = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = temp;
                    stop = 1;
                }
            }
            if (stop == 0) break; 
        }

        return nums;
    }
};

int main() {
    Solution sol;
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid size!" << endl;
        return 1;
    }

    vector<int> nums(n);

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = sol.transformArray(nums);

    cout << "Transformed & Sorted Array: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
