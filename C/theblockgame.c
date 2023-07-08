#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int original = n, remainder, reverse = 0;
        while (n != 0)
        {
            remainder = n % 10;
            reverse = reverse * 10 + remainder;
            n /= 10;
        }
        if (original == reverse)
        {
            printf("wins\n");
        }
        else
        {
            printf("loses\n");
        }
    }
    return 0;
}