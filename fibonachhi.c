#include <stdio.h>    // <-- to print a particualr nth fibonachi number .-->>

int main() {
    int n, first = 0, second = 1, next, i;

    printf("Enter the number of terms:\n ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n ");

    for (i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        
    }printf("\n%d\n ", next);

    return 0;
}
