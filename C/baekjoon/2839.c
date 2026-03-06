#include <stdio.h>
 
int main(void) {
    int n;
    scanf("%d", &n);
 
    int five = n/5;
    
    while (five >= 0) {
        int rest = n - five * 5;
        if (rest % 3 == 0) {
            int three = rest / 3;
            printf("%d", five + three);
            return 0;
        }
        five--;
    }
 
    printf("-1");
    
    return 0;
}
