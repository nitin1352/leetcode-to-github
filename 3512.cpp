#include <stdio.h>

int minOperations(int* nums, int numsSize, int k) {
    int i;
    int ans = 0;
    for (i = 0; i < numsSize; i++) {
        ans = ans + nums[i];
    }
    return ans % k;  // sum modulo k
}

int main() {
    int n, k, i;

    // Input size of array
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];  // declare array of size n

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Input k
    printf("Enter value of k: ");
    scanf("%d", &k);

    // Call function and print result
    int result = minOperations(nums, n, k);
    printf("Result = %d\n", result);

    return 0;
}
