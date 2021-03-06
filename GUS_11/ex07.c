#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
#include <unistd.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *));

void	ft_putstr(char *str)
{
	while (*str != 0)
		write(1, str++, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int c;

	c = 0;
	while ((*(s1 + c) != '\0') || (*(s2 + c) != '\0'))
	{
		if (*(s1 + c) != *(s2 + c))
		{
			return ((unsigned char)(*(s1 + c)) - (unsigned char)(*(s2 + c)));
		}
		++c;
	}
	return (0);
}

int		ft_strrevcmp(char *s1, char *s2)
{
	int c;

	c = 0;
	while ((*(s1 + c) != '\0') || (*(s2 + c) != '\0'))
	{
		if (*(s1 + c) != *(s2 + c))
		{
			return ((unsigned char)(*(s2 + c)) - (unsigned char)(*(s1 + c)));
		}
		++c;
	}
	return (0);
}

long long int		ft_strlen(char *str)
{
	long long int	count;

	count = 0;
	while (*(str + count) != '\0')
		++count;
	return (count);
}

char				separators(char sym, char *separator)
{
	long long int	count;

	count = 0;
	if (sym == '\0')
		return (1);
	while (*(separator + count) != '\0')
	{
		if (sym == *(separator + count))
			return (1);
		++count;
	}
	return (0);
}

long long int		test_l(char *str, char *charset)
{
	long long int	space_required;
	long long int	count;

	space_required = 0;
	count = 0;
	if (ft_strlen(str) == 0)
		return (0);
	if (ft_strlen(str) == 1)
	{
		if (separators(*str, charset))
			return (0);
		return (1);
	}
	if (!separators(*str, charset))
		++space_required;
	while (*(str + 1) != '\0')
	{
		if (separators(*str, charset) != separators(*(str + 1), charset))
			++space_required;
		++str;
	}
	if (!separators(*str, charset))
		++space_required;
	return (space_required / 2);
}

long long int		test_w(char *str, char *charset)
{
	long long int	count;

	count = 0;
	while (!separators(*(str + count), charset))
		++count;
	return (count);
}

char				**tester_func(char *str, char *charset)
{
	char			**res;
	long long int	count;
	long long int	curr_word;

	res = (char**)malloc(sizeof(char*) * test_l(str, charset) + 1);
	*(res + test_l(str, charset)) = NULL;
	curr_word = 0;
	while (*str != '\0')
	{
		if (!separators(*str, charset))
		{
			*(res + curr_word) = (char*)malloc(test_w(str, charset) + 1);
			count = 0;
			while (!separators(*str, charset))
			{
				*(*(res + curr_word) + count++) = *str;
				++str;
			}
			*(*(res + curr_word) + count) = '\0';
			++curr_word;
		}
		else
			++str;
	}
	return (res);
}

int		main(int argc, char **argv)
{
	int count;
	
	(void)argc;
	char **res = tester_func(*(argv + 1), *(argv + 2));
	ft_advanced_sort_string_tab(res, &ft_strcmp);
	count = 0;
    while (*(res + count) != NULL)
    {
        printf("%s\n", *(res + count));
        ++count;
    }
	ft_advanced_sort_string_tab(res, &ft_strrevcmp);
	count = 0;
    while (*(res + count) != NULL)
    {
        printf("%s\n", *(res + count));
        ++count;
    }
	return (0);
}