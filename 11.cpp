#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int water = 0;
        int i = 0;
        int j = height.size() - 1;
        
        while(i < j) {
            water = max(water, (j - i) * min(height[i], height[j]));
            
            if(height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }
        return water;
    }
};

int main() {
    Solution sol;
    int n;
    
    cout << "Enter number of elements: ";
    cin >> n;
    
    vector<int> height(n);
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> height[i];
    }
    
    int result = sol.maxArea(height);
    cout << "Maximum water that can be contained = " << result << endl;
    
    return 0;
}
