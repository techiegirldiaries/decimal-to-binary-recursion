//Convert decimal to Binary using recursion (with 2 logics)
#include <stdio.h>

int dectobin(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The binary number of %d: %d ", n, dectobin(n));
}

// First Logic (has been commented for the second one to work as it the return type is different for both func)
/*void dectobin(int n)
{
    if (n == 1)
    {
        printf("1");
        return;
    }

    if (n == 0)
    {
        printf("0");
        return;
    }

    dectobin(n / 2);
    printf("%d", n % 2);
}*/

//Second Logic
int dectobin(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n % 2 + 10 * dectobin(n / 2);
}
