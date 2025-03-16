// Program to print all prime numbers from 1 to n using sieve of eratosthenes algorithm

#include <stdio.h>

void sieveOfEratosthenes(int n) {
    int prime[n+1], i;
    for (i = 0; i <= n; i++) {
        prime[i] = 1;
    }
    for (i = 2; i*i <= n; i++) {
        if (prime[i] == 1) {
            for (int j = i*i; j <= n; j += i) {
                prime[j] = 0;
            }
        }
    }
    for (i = 2; i <= n; i++) {
        if (prime[i] == 1) {
            printf("%d ", i);
        }
    }
}
