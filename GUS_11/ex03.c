#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_count_if(char **tab, int length, int (*f)(char*));

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

int		ft_tester(char *test)
{
	return (ft_strcmp(test, "Only this EXACT string should return 0\0"));
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

char	*ft_strcpy(char *dest, char *src)
{
	int count;

	count = 0;
	while (*(src + count) != '\0')
	{
		*(dest + count) = *(src + count);
		++count;
	}
	*(dest + count) = '\0';
	return (dest);
}

void    ft_test(char **strs, int len, int corr)
{
	int res;

	res = ft_count_if(strs, len, &ft_tester);
	printf("Expected result string:\n%d\n", corr);
	printf("\nOutput:\n%d\n", res);
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
	char **strs;
	char my_corr_str[100] = "Only this EXACT string should return 0\0";
	char my_wrong_str[100]= "This is a wrong string :c\0";
	int count;

	count = 0;
	strs = (char**)malloc(sizeof(char*) * 11);
	*(strs + 10) = NULL;
	while (count < 10)
	{
		*(strs + count) = (char*)malloc(sizeof(char) * 100);
		*(strs + count) = ft_strcpy(*(strs + count), my_corr_str);
		++count;
	}
	*strs = ft_strcpy(*strs, my_wrong_str);
	*(strs + 9) = ft_strcpy(*(strs + 9), my_wrong_str);
	*(strs + 4) = ft_strcpy(*(strs + 4), my_wrong_str);
	ft_test(strs, 10, 3);
	ft_test(strs + 9, 1, 1);
	ft_test(strs + 4, 2, 1);
	count = 0;
	while (count < 10)
	{
		free(*(strs + count));
		++count;
	}
	free(strs);
    return (0);
}