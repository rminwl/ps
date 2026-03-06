#include <stdio.h>
 
int main(void) {
    int n;
    scanf("%d", &n);
 
    int cnt = 1;
    int num = 666;
    while (cnt != n) {
        num++;
 
        int six = 0;
        int cp = num;
        while (cp > 0) {
            if (cp % 1000 == 666) {
                six++;
            }
            cp /= 10;
        }
 
        if (six) cnt++;
    }
 
    printf("%d", num);
    return 0;
}
