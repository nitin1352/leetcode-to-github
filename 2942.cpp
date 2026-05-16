#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> result;   // dynamic container for indices
        for (int i = 0; i < words.size(); i++) {
            size_t pos = words[i].find(x);   // find position of char in string
            if (pos != string::npos) {       // check if found
                result.push_back(i);         // store index
            }
        }
        return result;   // return vector of indices
    }
};

int main() {
    // Example usage
    vector<string> words = {"apple", "banana", "cherry"};
    char x = 'a';

    Solution sol;
    vector<int> indices = sol.findWordsContaining(words, x);

    cout << "Indices containing '" << x << "': ";
    for (int idx : indices) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}
