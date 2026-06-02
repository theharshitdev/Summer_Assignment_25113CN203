#include <stdio.h>

int main() {
    int i, j, n, isPrime;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);

    for (i = 2; i <= n; i++) {
        isPrime = 1; 
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; 
                break;       
            }
        }   
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
