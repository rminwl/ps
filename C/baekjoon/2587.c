#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main(void) {
    int n[5] = { 0 };
    
    int avg = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &n[i]);
        avg += n[i];
    }
 
    avg /= 5;
    printf("%d\n", avg);
 
    for (int i = 1; i < 5; i++) {
        int change = n[i];
        int j = i - 1;
 
        while (j >= 0 && n[j] > change) {
            n[j + 1] = n[j];
            j--;
        }
        n[j + 1] = change;
    }
 
    printf("%d\n", n[2]);
 
    return 0;
}
