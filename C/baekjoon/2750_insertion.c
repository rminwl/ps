#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int num[1000] = { 0 };

    for (int i = 0; i < n; i++) scanf("%d", &num[i]);

    for (int i = 1; i < n; i++) {
        int change = num[i];
        int j = i - 1;

        while (j >= 0 && num[j] > change) {
            num[j + 1] = num[j];
            j--;
        }

        num[j + 1] = change;
    }

    for (int i = 0; i < n; i++) printf("%d\n", num[i]);

    return 0;
}
