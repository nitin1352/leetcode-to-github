#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum;
        int n = 0;
        for (int i = 0; i < nums.size(); i++) {
            n = n + nums[i];
            sum.push_back(n);
        }
        return sum;
    }
};

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    vector<int> nums(size);
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }

    Solution sol;
    vector<int> result = sol.runningSum(nums);

    cout << "Running Sum: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
