#include <stdio.h>
#include <string.h>

int sumOfDigits(int n) {
    
    // Convert number to string
    char s[20];
    sprintf(s, "%d", n);
    int sum = 0;

    // Loop through each character, convert
    // to digit, and add to sum
    for (int i = 0; i < strlen(s); i++) {
        sum += s[i] - '0';
        // Alternatively; sum = sum + (s[i] - '0');
    }

    return sum;
}

int main() {
    int n = 12345;
    printf("%d\n", sumOfDigits(n));
    return 0;
}