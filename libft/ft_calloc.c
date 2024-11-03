#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t count,size_t size)
{
    size_t result = count * size;
    unsigned char *a ;
     a = (unsigned char *)malloc(result);

    if(a == NULL)
        return NULL;
    ft_bzero(a,result);
    return a;
}
int main()
{
    char *a = ft_calloc(3,20);
    char *b = calloc(3,20);
    if(a == NULL)
    printf("olmadi");
    printf("%s %p",a,a);
    printf("\n%d",(int)strlen(a));
       printf("%s %p",b,b);
    printf("\n%d",(int)strlen(b));
}