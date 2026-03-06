#include <stdio.h>
 
int main(void) {
    int n;
    scanf("%d", &n);
 
    int cp = n;
    int digit = 0;
    while (cp > 0) {
        cp /= 10;
        digit++;
    }
    if (digit == 0) digit = 1;
    int max = digit * 9;
 
    for (int i = n-max; i < n; i++) {
        int tmp = i;
        int sum = i;
        while (tmp > 0) {
            sum += tmp % 10;
            tmp /= 10;
        }
 
        if (sum == n) {
            printf("%d", i);
            return 0;
        }
    }
 
    printf("0");
 
    return 0;
}
