#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

void ft_show_tab(struct s_stock_str *par);

//reset to original color
void reset()
{
	printf("\033[0m");
}
//green
//printf("\t\t\033[0;32mOK\n\n");
//red
//printf("\t\t\033[1;31mKO\n\n");


 void    ft_test(int size, char **strs, char *corr)
{
    struct s_stock_str* test = ft_strs_to_tab(size, strs);
    printf("Output:\n");
    ft_show_tab(test);
    free(test);
    printf("Expected output:\n%s", corr);
    return ;
}

int     main(void)
{
    //printf("\033[0;32mExpected time to run: 90±20 seconds.\033[0m\n");
    char *arr1[] = {"abc", "abd", "aca"};
    char *arr2[] = {"1", "2", "3", "4", "5", "6", "7", "8"};
    char *arr3[] = {"", "", "", "", "", "", ""};
    char *arr4[] = {};

    char *corr1 = "abc\n3\nabc\nabd\n3\nabd\naca\n3\naca\n";
    char *corr2 = "1\n1\n1\n2\n1\n2\n3\n1\n3\n4\n1\n4\n5\n1\n5\n6\n1\n6\n7\n1\n7\n8\n1\n8\n";
    char *corr3 = "\n0\n\n\n0\n\n\n0\n\n\n0\n\n\n0\n\n\n0\n\n\n0\n\n";
    char *corr4 = "";

    ft_test(3, arr1, corr1);
    ft_test(8, arr2, corr2);
    ft_test(7, arr3, corr3);
    ft_test(0, arr4, corr4);
    return (0);
}