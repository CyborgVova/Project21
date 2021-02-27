#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

char    *ft_strjoin(int size, char **strs, char *sep);


//reset to original color
void reset()
{
	printf("\033[0m");
}
//green
//printf("\t\t\033[0;32mOK\n\n");
//red
//printf("\t\t\033[1;31mKO\n\n");

void    ft_test(int size, char **strs, char *sep, char *corr_str)
{

    char *test = ft_strjoin(size, strs, sep);
    if (size == 0)
    {
        free(test);
    }
    printf("Expected result string:\n%s\n", corr_str);
	printf("\nOutput:\n%s\n", test);
    printf("Status: ");
    if (!(strcmp(corr_str, test)))
    {
    	printf("\033[0;32mOK\n\n");
        reset();
    }
    else
    {
        printf("\033[1;31mKO\n\n");
        reset();      
    }
    return ;
}

int     main(void)
{
    //printf("\033[0;32mExpected time to run: 90±20 seconds.\033[0m\n");
    char *arr1[] = {"abc", "abd", "aca"};
    char *sep1 = "SEP";

    char *arr2[] = {"1", "2", "3", "4", "5", "6", "7", "8"};
    char *sep2 = "";

    char *arr3[] = {"", "", "", "", "", "", ""};
    char *sep3 = "\\[*-*]/";

    char *arr4[] = {};
    char *sep4 = "\\[**]/";

    ft_test(3, arr1, sep1, "abcSEPabdSEPaca");
    ft_test(8, arr2, sep2, "12345678");
    ft_test(7, arr3, sep3, "\\[*-*]/\\[*-*]/\\[*-*]/\\[*-*]/\\[*-*]/\\[*-*]/");
    ft_test(0, arr4, sep4, "");
    return (0);
}