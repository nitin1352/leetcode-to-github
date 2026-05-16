#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            ans.push_back(nums[i]);
            ans.push_back(nums[i+n]);
        }
        return ans;
    }
};

int main() {
    int size, n;
    cout << "Enter size of array (must be even): ";
    cin >> size;

    vector<int> nums(size);
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }

    cout << "Enter n (half of size): ";
    cin >> n;

    Solution obj;
    vector<int> result = obj.shuffle(nums, n);

    cout << "Shuffled array: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
