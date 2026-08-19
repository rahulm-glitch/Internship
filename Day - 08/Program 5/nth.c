#include <stdio.h>

int main() {
    int n, i, num, sum = 0;

    printf(" Enter the sum number (N): ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("%d- Enter the number: ", i);
        scanf("%d", &num);
        sum = sum + num; 
    }

    printf("\n The sum of %d numbers is = %d", n, sum);
    return 0;
}