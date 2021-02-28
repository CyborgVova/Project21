#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);


//reset to original color
void reset()
{
	printf("\033[0m");
}
//green
//printf("\t\t\033[0;32mOK\n\n");
//red
//printf("\t\t\033[1;31mKO\n\n");


 void    ft_test(int size, char **strs)
{
    char flag = 0;
    struct s_stock_str* test = ft_strs_to_tab(size, strs);


    int cnt = 0;

    while (cnt < size)
    {
        if (strcmp((test + cnt)->str, (test + cnt)->copy))
            {
                flag = 1;
                break;
            }
        if ((test + cnt)->copy == (test + cnt)->str)
            {
                flag = 1;
                break;
            }
        cnt++;
    }
    if ((test + cnt)->str != NULL && flag != 1)
    {
        flag = 2;
    }
    printf("Status: ");
    if (flag == 0)
    {
    	printf("\033[0;32mOK\n\n");
        reset();
    }
    else if (flag == 1)
    {
        printf("\033[1;31mKO\nCopy test failed! (malloc?)\n\n");
        reset();      
    }
    else if (flag == 2)
    {
        printf("\033[1;31mKO\nFinal element test failed! (RTFM)\n\n");
        reset(); 
    }
    return ;
}

int     main(void)
{
    //printf("\033[0;32mExpected time to run: 90±20 seconds.\033[0m\n");
    char *arr1[] = {"abc", "abd", "aca"};
    char *arr2[] = {"1", "2", "3", "4", "5", "6", "7", "8"};
    char *arr3[] = {"", "", "", "", "", "", ""};
    char *arr4[] = {};

    ft_test(3, arr1);
    ft_test(8, arr2);
    ft_test(7, arr3);
    ft_test(0, arr4);
    return (0);
}