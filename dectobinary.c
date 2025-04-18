#include <stdio.h>

int dectobin(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The binary number of %d: %d ", n, dectobin(n));
}

// void dectobin(int n)
// {
//     if (n == 1)
//     {
//         printf("1");
//         return;
//     }

//     if (n == 0)
//     {
//         printf("0");
//         return;
//     }

//     dectobin(n / 2);
//     printf("%d", n % 2);
// }

int dectobin(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n % 2 + 10 * dectobin(n / 2);
}