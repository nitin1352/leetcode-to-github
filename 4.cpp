#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merge;
        
        // Merge both arrays
        for(int i=0; i<nums1.size(); i++){
            merge.push_back(nums1[i]);
        }
        for(int i=0; i<nums2.size(); i++){
            merge.push_back(nums2[i]);
        }
        
        // Sort merged array
        sort(merge.begin(), merge.end());
        
        int n = merge.size();
        if(n % 2 == 1) {
            // Odd case → middle element
            return merge[n/2];
        } else {
            // Even case → average of two middle elements
            return (merge[n/2] + merge[n/2 - 1]) / 2.0;
        }
    }
};

int main() {
    Solution sol;
    int n1, n2;
    
    cout << "Enter size of first array: ";
    cin >> n1;
    vector<int> nums1(n1);
    cout << "Enter elements of first array: ";
    for(int i=0; i<n1; i++) {
        cin >> nums1[i];
    }
    
    cout << "Enter size of second array: ";
    cin >> n2;
    vector<int> nums2(n2);
    cout << "Enter elements of second array: ";
    for(int i=0; i<n2; i++) {
        cin >> nums2[i];
    }
    
    double median = sol.findMedianSortedArrays(nums1, nums2);
    cout << "Median of merged arrays = " << median << endl;
    
    return 0;
}
