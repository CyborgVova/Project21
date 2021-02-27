#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);


//reset to original color
void reset()
{
	printf("\033[0m");
}
//green
//printf("\t\t\033[0;32mOK\n\n");
//red
//printf("\t\t\033[1;31mKO\n\n");

void    ft_test(char *nbr, char *base_from, char *base_to, char *corr)
{
    char *test = ft_convert_base(nbr, base_from, base_to);
    printf("Expected result string:\n%s\n", corr);
	printf("\nOutput:\n%s\n", test);
    printf("Status: ");
    if (!(strcmp(corr, test)))
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

void    ft_test2(char *str, char *base_inv, char *base_from, char *base_to)
{
    if ((ft_convert_base(str, base_inv, base_to) == NULL) && (ft_convert_base(str, base_from, base_inv) == NULL))
    {
        printf("Status: ");
    	printf("\033[0;32mOK\n\n");
        reset();
    }
    else
    {
        printf("Status: ");
        printf("\033[1;31mKO\n\n");
        reset();      
    }
}

int     main(void)
{
    //int min = INT_MIN;
    //int max = INT_MAX;
    //int zero = 0;
    char base_from[100] = "284chLyuX5pM.\0";
    char base_to[100] = ".7hj1Sc\0";
    //char base_to[100] = "0123456789ABCDEF";

    char str1[100] = " \n\f\r\t\v 5y ";
    char str2[100] = " \n\f\rr\t\v 5y ";
    char str3[100] = "---+--+4X4MphppM";
    char str4[100] = "---+8--+4X4MphppM";
    char str5[100] = "5ytestpypp";
    char str6[100] = "5ytestpypp";
    char str7[100] = "   \n\n\f    \n \n---+---+4X4Mphppp\0";
    char str8[100] = "---+--\t-+4X4MphppM";
    char str9[100] = "";
	char str10[100] = "\t";
	char str11[100] = "---+--+Lp4y22+cpM";
	char str12[100] = "---+--+Lp4y22\fcpM";

    /*char corr1[100] = "123";
    char corr2[100] = "0";
    char corr3[100] = "-2147483648";
    char corr4[100] = "-1";
    char corr5[100] = "123";
    char corr6[100] = "23124";
    char corr7[100] = "2147483647";
    char corr8[100] = "0";
    char corr9[100] = "0";
	char corr10[100] = "0";
	char corr11[100] = "-2147483";
	char corr12[100] = "-2147483";*/

    char corr1[100] = "hj1";
    char corr2[100] = ".";
    char corr3[100] = "-7.17j1h777ch";
    char corr4[100] = "-7";
    char corr5[100] = "hj1";
    char corr6[100] = "7h1hcj";
    char corr7[100] = "7.17j1h777c7";
    char corr8[100] = ".";
    char corr9[100] = ".";
	char corr10[100] = ".";
	char corr11[100] = "-h17Shc7h";
	char corr12[100] = "-h17Shc7h";

    printf("\nSTAGE 01 -- Border values and custom base check\n");
    ft_test (str1, base_from, base_to, corr1);
    ft_test (str2, base_from, base_to, corr2);
    ft_test (str3, base_from, base_to, corr3);
    ft_test (str4, base_from, base_to, corr4);
    ft_test (str5, base_from, base_to, corr5);
    ft_test (str6 + 6, base_from, base_to, corr6);
    ft_test (str7, base_from, base_to, corr7);
    ft_test (str8, base_from, base_to, corr8);
    ft_test (str9, base_from, base_to, corr9);
    ft_test (str10, base_from, base_to, corr10);
    ft_test (str11, base_from, base_to, corr11);
    ft_test (str12, base_from, base_to, corr12);


    printf("\nSTAGE 02 -- Checks for invalid bases\n");
    char base_inv1[100] = "123456+";
    ft_test2(str1, base_inv1, base_from, base_to);
    char base_inv2[100] = "123456 ";
    ft_test2(str1, base_inv2, base_from, base_to);
    char base_inv3[100] = "-123456";
    ft_test2(str1, base_inv3, base_from, base_to);
    char base_inv4[100] = "123456-";
    ft_test2(str1, base_inv4, base_from, base_to);
    char base_inv5[100] = "1";
    ft_test2(str1, base_inv5, base_from, base_to);
    char base_inv6[100] = "\0";
    ft_test2(str1, base_inv6, base_from, base_to);
    char base_inv7[100] = "123455";
    ft_test2(str1, base_inv7, base_from, base_to);
    char base_inv8[100] = "12345\f";
    ft_test2(str1, base_inv8, base_from, base_to);

    return (0);
}