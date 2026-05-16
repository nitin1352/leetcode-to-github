#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int count;
        for (int i = 0; i < nums.size(); i++) {
            count = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (j == i) continue;
                if (nums[j] < nums[i]) {
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    vector<int> result = obj.smallerNumbersThanCurrent(nums);

    cout << "Result array: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
