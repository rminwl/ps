#include <stdio.h>
 
int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    int c[100] = { 0 };
    for (int i = 0; i < n; i++) {
        scanf("%d", &c[i]);
    }
 
    int d = 0;
    for (int i = 0; i < n-2; i++) {
        for (int j = i + 1; j < n-1; j++) {
            for (int k = j + 1; k < n; k++) {
                int sum = c[i] + c[j] + c[k];
 
                if ((m - sum >= 0) && (m - sum < m - d)) {
                    d = sum;
                }
            }
        }
    }
 
    printf("%d", d);
 
    return 0;
}
