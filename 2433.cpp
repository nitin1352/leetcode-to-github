#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> arr;
        arr.push_back(pref[0]); // first element remains same
        for (int i = 0; i < pref.size() - 1; i++) {
            int n = pref[i] ^ pref[i + 1]; // XOR difference
            arr.push_back(n);
        }
        return arr;
    }
};

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> pref(n);
    cout << "Enter " << n << " elements of prefix array: ";
    for (int i = 0; i < n; i++) {
        cin >> pref[i];
    }

    Solution obj;
    vector<int> result = obj.findArray(pref);

    cout << "Reconstructed array: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
