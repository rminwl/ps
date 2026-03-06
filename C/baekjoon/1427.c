#include <stdio.h>
 
int main(void) {
    char num[10] = { 0 };
    scanf(" %s", num);
 
    int len = 0;
    while (num[len] != '\0') len++;
 
    for (int i = 1; i < len; i++) {
        char n = num[i];
        int j = i - 1;
 
        while (j >= 0 && num[j] < n) {
            num[j + 1] = num[j];
            j--;
        }
        num[j + 1] = n;
    }
 
    for (int i = 0; i < len; i++) printf("%c", num[i]);
    return 0;
}
