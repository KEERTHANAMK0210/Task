#include <stdio.h>

int main() {
    int c[] = {1, 2, 4, 32, 12, 6, 8};
    int size = sizeof(c) / sizeof(c[0]);

    int max = c[0];  
    int min = c[0];  

    
    for (int i = 1; i < size; i++) {
        if (c[i] > max) {
            max = c[i];
        }
        if (c[i] < min) {
            min = c[i];
        }
    }

    printf("The largest number is: %d\n", max);
    printf("The smallest number is: %d\n", min);

    return 0;
}
