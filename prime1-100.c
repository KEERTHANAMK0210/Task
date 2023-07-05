#include <stdio.h>

int main() {
    printf("Prime numbers between 1 and 100:\n");
    for (int n = 2; n <= 100; n++) {
        int prime = 1;
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                prime = 0;
                break;
            }
        }
        if (prime)
            printf("%d ", n);
    }
    printf("\n");

    return 0;
}
