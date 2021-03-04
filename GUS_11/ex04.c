#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int));

int		my_func_test(int a, int b)
{
	if (a < b)
		return (100);
	if (b < a)
		return (-100);
	return (0);
}

//reset to original color
void reset()
{
	printf("\033[0m");
}
//green
//printf("\t\t\033[0;32mOK\n\n");
//red
//printf("\t\t\033[1;31mKO\n\n");

void    ft_test(int *tab, int len, int corr)
{
	int res;

	res = ft_is_sort(tab, len, &my_func_test);
	//printf("Expected result string:\n%d\n", corr);
	//printf("\nOutput:\n%d\n", res);
    printf("Status: ");
    if (res == corr)
    {
    	printf("\033[0;32mOK\n\n");
        reset();
    }
    else
    {
        printf("\033[1;31mKO\n\n");
        reset();      
    }
}

int     main(void)
{
	int tab[10];
	int count;

	count = 0;
	while (count < 10)
	{
		tab[count] = count + 101;
		++count;
	}
	tab[9] = 0; 
	ft_test(tab, 9, 1);
	ft_test(tab, 10, 0);
	count = 0;
	while (count < 10)
	{
		tab[count] = -1 * count - 67;
		++count;
	}
	tab[9] = 0; 
	ft_test(tab, 9, 1);
	ft_test(tab, 10, 0);
	tab[0] = -111111;
	ft_test(tab, 2, 1);
	ft_test(tab, 3, 0);
		count = 0;
	while (count < 10)
	{
		tab[count] = 0;
		++count;
	}
	ft_test(tab, 10, 1);
    return (0);
}