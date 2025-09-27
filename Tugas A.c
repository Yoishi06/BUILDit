#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float j;
    float t;
    scanf("%f %f", &j, &t);
    float v = j / t;
    printf("%.3f", v);
    return 0;
}
