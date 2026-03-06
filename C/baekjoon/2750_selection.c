#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Selection Sort
int main(void) {
    int n;
    scanf("%d", &n);
    int num[1000] = { 0 };

    for (int i = 0; i < n; i++) scanf("%d", &num[i]);

    for (int i = 0; i < n - 1; i++) {
        int idx = i;
        for (int j = i + 1; j < n; j++) {
            if (num[j] < num[idx]) idx = j;
        }

        if (idx != i) {
            int tmp = num[i];
            num[i] = num[idx];
            num[idx] = tmp;
        }
    }

    for (int i = 0; i < n; i++) printf("%d\n", num[i]);
    return 0;
}
