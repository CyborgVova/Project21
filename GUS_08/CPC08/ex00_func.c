#include <stdio.h>

void	ft_putchar(char c)
{
    (void)c;
    printf("ft_putchar was called successfully\n");
}

void	ft_swap(int *a, int *b)
{
    (void)a;
    (void)b;
    printf("ft_swap was called successfully\n");
}

void	ft_putstr(char *str)
{
    (void)str;
    printf("ft_putstr was called successfully\n");
}

int		ft_strlen(char *str)
{
    (void)str;
    printf("ft_strlen was called successfully\n");
    return (0);
}

int		ft_strcmp(char *s1, char *s2)
{
    (void)s1;
    (void)s2;
    printf("ft_strcmp was called successfully\n");
    return (0);
}