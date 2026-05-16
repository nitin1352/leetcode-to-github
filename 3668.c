#include <stdio.h>
#include <stdlib.h>

// Function to recover order
int* recoverOrder(int* order, int orderSize, int* friends, int friendsSize, int* returnSize) {
    int* result = malloc(orderSize * sizeof(int)); // allocate enough space
    int count = 0;

    for (int i = 0; i < orderSize; i++) {
        for (int j = 0; j < friendsSize; j++) {
            if (order[i] == friends[j]) {
                result[count++] = order[i];
                break; // move to next order element once matched
            }
        }
    }

    *returnSize = count; 
    return result;       
}

int main() {
    int order[] = {1, 2, 3, 4, 5};
    int friends[] = {3, 5, 7};
    int orderSize = sizeof(order) / sizeof(order[0]);
    int friendsSize = sizeof(friends) / sizeof(friends[0]);
    int returnSize;

    // Call the function
    int* result = recoverOrder(order, orderSize, friends, friendsSize, &returnSize);

    // Print the result
    printf("Recovered order: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    // Free allocated memory
    free(result);

    return 0;
}
