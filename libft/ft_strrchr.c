#include <stdio.h>
#include <string.h>
int ft_strlen( const char *s);
char *ft_strrchr(const char *s, int c)
{
    
    int n = ft_strlen(s);
    while( n > 0)
    {
        if(s[n] == (char)c)
        {
            return ((char*)s + n);
        }
        n --;
    }
    return NULL;
}

int main()
{
    char a[] = "kuymak tatmaya gelduk";
    printf("%s",ft_strrchr(a,'k'));
    printf("%s",strrchr(a,'k'));
}