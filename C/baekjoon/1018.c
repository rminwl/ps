#include <stdio.h>
 
int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
 
    char chess[50][50] = { 0 };
    for (int i = 0; i < n; i++) {
        scanf(" %s", chess[i]);
    }
 
    int change = 64;
    for (int row = 0; row <= n - 8; row++) {
        for (int col = 0; col <= m - 8; col++) {
 
            int wb = 0, bw = 0;
 
            for (int i = row; i < row + 8; i++) {
                for (int j = col; j < col + 8; j++) {
                    int ri = (i - row) % 2;
                    int cj = (j - col) % 2;
 
                    if ((ri == 0) && (cj == 0)) {
                        if (chess[i][j] == 'W') bw++;
                        else wb++;
                    }
                    else if ((ri == 0) && (cj == 1)) {
                        if (chess[i][j] == 'W') wb++;
                        else bw++;
                    }
                    else if ((ri == 1) && (cj == 0)) {
                        if (chess[i][j] == 'W') wb++;
                        else bw++;
                    }
                    else {
                        if (chess[i][j] == 'W') bw++;
                        else wb++;
                    }
                }
            }
 
            if (wb < change) change = wb;
            else if (bw < change) change = bw;
        }
    }
    
    printf("%d", change);
 
    return 0;
}
