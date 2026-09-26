#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int reverseDigits(int n)
{
    char str[100];

    // Convert integer to string
    sprintf(str, "%d", n);

    // Reverse the string
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    // Convert string back to integer
    return atoi(str);
}

int main()
{
    int n = 123456;

    printf("%d\n", reverseDigits(n));

    return 0;
}