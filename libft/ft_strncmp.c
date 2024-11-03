#include <stdio.h>
#include <string.h>
int ft_strncmp(const char *s1, const char *s2, size_t n) 
{
    size_t i = 0;
    while (i < n) {
       
        if (s1[i] == '\0' || s2[i] == '\0') {
            return (unsigned char)s1[i] - (unsigned char)s2[i];
        }
        if (s1[i] != s2[i]) {
            return (unsigned char)s1[i] - (unsigned char)s2[i]; 
        }
        i++;
    }
    return 0; 
}

int main()
{
    char *a;
    char *b ;
    int c = ft_strncmp(a,b,6);
    int d = strncmp(a,b,6);
    
    printf("%d",c);
    printf("\n%d",d);
}