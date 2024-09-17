#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str1[106];
    char str2[106];

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (strlen(str1) != strlen(str2)) {
        printf("BERBEDA\n");
    } else if (strcmp(str1, str2) == 0) {
        printf("IDENTIK\n");
    } else {
        printf("MIRIP\n");
    }

    return 0;
}