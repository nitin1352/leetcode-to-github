#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans;
        ans.push_back(first);
        for (int i = 0; i < encoded.size(); i++) {
            int n = ans[i] ^ encoded[i];  // XOR to get next element
            ans.push_back(n);
        }
        return ans;
    }
};

int main() {
    int n, first;
    cout << "Enter size of encoded array: ";
    cin >> n;

    vector<int> encoded(n);
    cout << "Enter elements of encoded array: ";
    for (int i = 0; i < n; i++) {
        cin >> encoded[i];
    }

    cout << "Enter first element of original array: ";
    cin >> first;

    Solution obj;
    vector<int> decoded = obj.decode(encoded, first);

    cout << "Decoded array: ";
    for (int x : decoded) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
