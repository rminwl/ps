#include <stdio.h>
 
int main(void) {
    int a[3] = { 0 };
    int b[3] = { 0 };
 
    for (int i = 0; i < 3; i++) scanf("%d", &a[i]);
    for (int i = 0; i < 3; i++) scanf("%d", &b[i]);
    int ta = a[0], tb = b[0];
 
    for (int i = 0; i < 3; i++) {
        a[i] *= tb;
        b[i] *= ta;
    }
    int y = (a[2] - b[2]) / (a[1] - b[1]);
    int x = (a[2] - a[1] * y) / a[0];
 
    printf("%d %d", x, y);
 
    return 0;
}
