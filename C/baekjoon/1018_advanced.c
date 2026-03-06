#include <stdio.h>
 
int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
 
    char chess[50][50] = {0};
    for (int i = 0; i < n; i++) {
        scanf(" %s", chess[i]);
    }
 
    int change = 64;
 
    for (int row = 0; row <= n - 8; row++) {
        for (int col = 0; col <= m - 8; col++) {
 
            int wb = 0, bw = 0;
 
            for (int i = row; i < row + 8; i++) {
                for (int j = col; j < col + 8; j++) {
 
                    int parity = (i - row + j - col) % 2;
 
                    char expectW = (parity == 0) ? 'W' : 'B';
                    char expectB = (parity == 0) ? 'B' : 'W';
 
                    if (chess[i][j] != expectW) wb++;
                    if (chess[i][j] != expectB) bw++;
                }
            }
 
            int local = (wb < bw) ? wb : bw;
            if (local < ans) change = local;
        }
    }
 
    printf("%d", change);
    return 0;
}
