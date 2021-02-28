#include <stdio.h>
#include WORKPATH
#include WORKPATH

int     main(void)
{
    int a;
    int b;

    a = -5823111;
    b = 7537631;
    printf("Expected output:\n5823111 7537631\n\n");
    printf("Your output:\n%d %d\n", ABS(a), ABS(b));
    return (0);
}