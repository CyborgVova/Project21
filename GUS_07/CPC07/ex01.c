#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

int    *ft_range(int min, int max);


//reset to original color
void reset()
{
	printf("\033[0m");
}
//green
//printf("\t\t\033[0;32mOK\n\n");
//red
//printf("\t\t\033[1;31mKO\n\n");

void    ft_test(int min, int max, int is_null)
{

    int *test = ft_range(min, max);

    if (is_null == 1)
    {
        printf("Expected result string:\n%p\n", NULL);
	    printf("\nOutput:\n%p\n", test);
        printf("Status: ");
        if (test == NULL)
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
	if (*test == min && (*(test + (long long int)max - (long long int)min - 1) == max - 1))
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
    free(test);
}

int     main(void)
{
    printf("\033[0;32mExpected time to run: 90±20 seconds.\033[0m\n");
    time_t begin = time(NULL);
    ft_test(-3, 3, 0);
    ft_test(0, 1, 0);
    ft_test(4, 0, 1);
    ft_test(INT_MIN, INT_MAX, 0);
    time_t end = time(NULL);
    double time_spent = (double)(end - begin);
    printf("\033[1;31mTime spent: %lf\033[0m\n", time_spent);
    return (0);
}