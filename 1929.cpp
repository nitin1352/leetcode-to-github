#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2 * n);   // allocate space for 2n elements

        for (int i = 0; i < n; i++) {
            ans[i] = nums[i];       // first copy
            ans[i + n] = nums[i];   // second copy
        }
        return ans;
    } 
};

int main() {
    Solution s;
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];   // user input
    }

    vector<int> result = s.getConcatenation(nums);

    cout << "Concatenated array: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
