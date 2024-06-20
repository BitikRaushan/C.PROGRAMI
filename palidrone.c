#include <stdio.h>

int main() {
    int num, reversedNum = 0, originalNum, remainder;

    printf("Enter a number:\n ");
    scanf("%d", &num);

    originalNum = num; // Store the original number

    // Reverse the number
    while (num > 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum)
        printf("\n%d is a palindrome number.\n");
    else
        printf("%d is not a palindrome number.\n");

    return 0;
}
