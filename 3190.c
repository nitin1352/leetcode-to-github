#include <stdio.h>

int minimumOperations(int* nums, int numsSize) {
    int ans = 0;
    for (int i = 0; i < numsSize; i++) {
        // If remainder is 1 or 2 when divided by 3
        if (nums[i] % 3 == 1 || nums[i] % 3 == 2) {
            ans++;   // increment count
        }
    }
    return ans;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];  // variable length array (C99 feature)

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int result = minimumOperations(nums, n);
    printf("Minimum operations = %d\n", result);

    return 0;
}
