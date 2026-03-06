#include <stdio.h>
 
int main(void) {
    int n, k;
    scanf("%d %d", &n, &k);
 
    int score[1000] = { 0 };
 
    for (int i = 0; i < n; i++) scanf("%d", &score[i]);
    
    for (int i = 0; i < k; i++) {
        int idx = i;
        for (int j = i + 1; j < n; j++) {
            if (score[j] > score[idx]) idx = j;
        }
 
        if (idx != i) {
            int tmp = score[i];
            score[i] = score[idx];
            score[idx] = tmp;
        }
    }
 
    printf("%d", score[k-1]);
 
    return 0;
}
