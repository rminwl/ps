#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Bubble Sort
int main(void) {
    int n;
    scanf("%d", &n);
    int num[1000] = { 0 };

    for (int i = 0; i < n; i++) scanf("%d", &num[i]);

    for (int i = 0; i < n-1; i++) {
        for (int j = i; j < n; j++) {
            if (num[i] > num[j]) {
                int tmp = num[i];
                num[i] = num[j];
                num[j] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++) printf("%d\n", num[i]);

    return 0;
}
