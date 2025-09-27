#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int n = B - A + 1;                  // jumlah suku
    int total = n * (A + B) / 2;        // rumus deret aritmatika

    printf("%d\n", total);
    return 0;
}