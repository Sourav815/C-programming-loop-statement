#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c = 0;
    printf("Enter upper limit:\n");
    scanf("%d", &n);
    while (c <= n)
    {
        printf(" %d", c);
        a = b;
        b = c;
        c = a + b;
    }
    return 0;
}