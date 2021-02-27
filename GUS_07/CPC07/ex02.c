#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

int    ft_ultimate_range(int **range, int min, int max);


//reset to original color
void reset()
{
	printf("\033[0m");
}
//green
//printf("\t\t\033[0;32mOK\n\n");
//red
//printf("\t\t\033[1;31mKO\n\n");

void    ft_test(int **range, int min, int max, int is_null)
{
    int res = ft_ultimate_range(range, min, max);
    
    if (is_null == 3)
    {
        //printf("Expected result string:\n%d\n", 0);
	    //printf("\nOutput:\n%d\n", 0);
        printf("Status: ");
        if (**range == min && (*(*range + (long long int)max - (long long int)min - 1) == max - 1)
            && (res == -1))
        {
        	printf("\033[0;32mOK\n\n");
            reset();
        }
        else
        {
            printf("\033[1;31mKO\n\n");
            reset();      
        }
        free(*range);
        return ;
    }
    if (is_null == 2)
    {
        //printf("Expected result string:\n%d\n", 0);
	    //printf("\nOutput:\n%d\n", 0);
        printf("Status: ");
        if (res == -1)
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
    if (is_null == 1)
    {
        //printf("Expected result string:\n%d\n", 0);
	    //printf("\nOutput:\n%d\n", res);
        printf("Status: ");
        if ((*range == NULL) && (res == 0))
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
	printf("Status: ");
	if (**range == min && (*(*range + (long long int)max - (long long int)min - 1) == max - 1)
                        && (res == (long long int)max - (long long int)min))
	{
		printf("\033[0;32mOK\n\n");
        reset();
	}
	else
	{
		printf("\033[1;31mKO\n\n");
        reset();
	}
	printf("\n\n");
    free(*range);
}

int     main(void)
{
    printf("\033[0;32mExpected time to run: 90±20 seconds.\033[0m\n");
    int *test1 = NULL;
    int *test2 = NULL;
    int *test3 = NULL;
    int *test4 = NULL;
    int **test5 = NULL;
    time_t begin = time(NULL);
    ft_test(&test1, -3, 3, 0);
    ft_test(&test2, 0, 1, 0);
    ft_test(&test3, 4, 0, 1);
    //printf("The following test WILL show status KO. It is wrong, it's a mechanical error that can not be fixed.\nThis test exsits only to make sure you don't have a SEGFAULT in your code. \nIf it shows anything - it is working. DO NOT TRY TO FIX IT. You will not be able to do so.\n");
    ft_test(&test4, INT_MIN, INT_MAX, 3);
    ft_test(test5, 0, 1, 2);
    time_t end = time(NULL);
    double time_spent = (double)(end - begin);
    printf("\033[1;31mTime spent: %lf\033[0m\n", time_spent);
    return (0);
}