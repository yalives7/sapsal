static int  ft_isspace(int x);

#include <stdio.h>

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;
    result = 0;
    i = 0;
    sign = 1;
       while(ft_isspace(str[i]))
            i++;

        if(str[i] == '-')
        {
            sign *= -1;
            i++;
        }
        else if(str[i] == '+')
            i++;

        while( 48 <= str[i] && str[i] <= 57)
        {
            result = result * 10 + (str[i] - '0');
            i++;
        }
        return (result * sign);
    
}
static int ft_isspace(int x)
{
    if(x == 't' || x == '\n' || x == ' ' || x == '\v' || x == '\r')
        return (1);
    return (0);
    
}
int main()
{
    char a [] = "hjfbhjd34abnm";
    printf("%d",ft_atoi(a));
}