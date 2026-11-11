#include <stdio.h>

int main (void){
    int n;
    long long total = 0;
    scanf ("%d", &n);
    if (n < 0) {
        printf("NG");
        return 0;
    } if (n == 0){
        printf("0");
        return 0;
    } else {
        for (int i = 2; i <= n; i += 2){
            total += i;
        }
    } printf ("%lld", total);
    return 0;
}