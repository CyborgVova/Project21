#include <stdio.h>
#include WORKPATH
#include WORKPATH

int     main(void)
{
    int a = 0;
    char b = 'a';
    char str[100] = "aaaaa";

    ft_putchar(b);
    ft_swap(&a, &a);
    ft_putstr(str);
    a = ft_strlen(str);
    a = ft_strcmp(str, str);
    return (0);
}