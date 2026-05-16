#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        int i, j;
        for (i = 0; i < words.size(); i++) {
            for (j = 0; j < words[i].size(); j++) {
                char c = words[i][j];
                if (allowed.find(c) == -1) { // character not found
                    break; // stop checking this word
                }
            }
            if (j == words[i].size()) { // loop finished fully → consistent
                count++;
            }
        }
        return count;
    }
};

int main() {
    string allowed;
    int n;
    cout << "Enter allowed string: ";
    cin >> allowed;

    cout << "Enter number of words: ";
    cin >> n;

    vector<string> words(n);
    cout << "Enter the words:\n";
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    Solution sol;
    int result = sol.countConsistentStrings(allowed, words);
    cout << "Number of consistent strings = " << result << endl;

    return 0;
}
