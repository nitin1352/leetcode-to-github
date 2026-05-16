#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                sum += nums[i];   // add at even index
            } else {
                sum -= nums[i];   // subtract at odd index
            }
        }
        return sum;
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

    int result = s.alternatingSum(nums);
    cout << "Alternating Sum = " << result << endl;

    return 0;
}
