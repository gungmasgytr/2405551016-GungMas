#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N < 2) {
        printf("BUKAN\n");
        return 0;
    }

    if (N == 2 || N == 3) {
        printf("PRIMA\n");
        return 0;
    }

    if (N % 2 == 0) {
        printf("BUKAN\n");
        return 0;
    }


    int sqrtN = (int)sqrt(N);
    for (int i = 3; i <= sqrtN; i += 2) {
        if (N % i == 0) {
            printf("BUKAN\n");
            return 0;
        }
    }

    printf("PRIMA\n");
   
    return 0;
}