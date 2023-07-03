#include <stdio.h>

int main() {
    int numberList[] = {1, 2, 3, 4, 5};
    int n = sizeof(numberList) / sizeof(numberList[0]);

    int target;
    printf("Enter the number to search: ");
    scanf("%d", &target);

    int foundIndex = -1;
    for (int i = 0; i < n; i++) {
        if (numberList[i] == target) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        printf("The number %d is found at position %d.\n", target, foundIndex);
    } else {
        printf("The number %d is not found in the array.\n", target);
    }

    return 0;
}