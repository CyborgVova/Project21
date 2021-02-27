#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strdup(char *str);


//reset to original color
void reset()
{
	printf("\033[0m");
}
//green
//printf("\t\t\033[0;32mOK\n\n");
//red
//printf("\t\t\033[1;31mKO\n\n");

void    ft_test(char *str)
{

    char *test1 = strdup(str);
    char *test2 = ft_strdup(str);
    //printf("Expected result string:\n%s\n", test1);
	//printf("\nOutput:\n%s\n", test2);
	printf("Status: ");
	if (strcmp(test1, test2) == 0)
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
    free(test1);
    free(test2);
}

int     main(void)
{
    char str1[100] = "Testing results lol\0";
    char str2[100] = "\0";
    char str3[100] = "My mega test hehe \0 broke this code";

    ft_test(str1);
    ft_test(str2);
    ft_test(str3);
    return (0);
}