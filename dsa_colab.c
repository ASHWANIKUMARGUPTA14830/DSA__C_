#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int m;
    scanf("%d", &m);
    
    int b[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    int total = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1] - a[i] >= b[i]) {
            total++;
        }
    }

    printf("%d\n", total);

    return 0;
}
