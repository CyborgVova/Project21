#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void		ft_foreach(int *tab, int length, void (*f)(int));

void	ft_putnbr_mod(int nb)
{
	long long	divider;
	char		current_digit;
	char		num_started;

	num_started = 1;
	divider = -1000000000;
	if (nb < 0)
	{
		write(1, "-", 1);
	}
	else
	{
		nb = nb * -1;
	}
	while (divider != 0)
	{
		current_digit = nb / divider % 10 + 48;
		divider = divider / 10;
		if ((current_digit != '0') || (num_started != 1) || (divider == 0))
		{
			num_started = 0;
			write(1, &current_digit, 1);
		}
	}
	write(1, "\n", 1);
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

	count = 0;
	while (count < 10)
	{
		tab[count] = count + 101;
		++count;
	}
	ft_foreach(tab, 10, &ft_putnbr_mod);
}

int     main(void)
{
	ft_test();
    return (0);
}