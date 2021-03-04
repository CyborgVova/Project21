#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int		*ft_map(int *tab, int length, int (*f)(int));

int		is_42(int nb)
{
	if (nb == 42)
		return (1);
	return(0);
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

void    ft_test()
{
	int tab[10];
	int count;
	int *res;

	count = 0;
	while (count < 10)
	{
		tab[count] = count + 101;
		++count;
	}
	tab[5] = 42;
	tab[8] = 42;
	res = ft_map(tab, 10, &is_42);
	count = 0;
	while (count < 10)
	{
		printf("%d %d\n", *(tab + count), *(res + count));
		++count;
	}
	free(res);
}

int     main(void)
{
	ft_test();
    return (0);
}