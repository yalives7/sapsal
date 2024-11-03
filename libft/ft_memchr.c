#include<stddef.h>
#include<stdio.h>
#include<string.h>

void *ft_memchr(const void *s,int c,size_t n)
{
    size_t i;
    i = 0;
    unsigned char *p = (unsigned char *)s;
    while(i<n)
    {
        if( p[i]== c)
        return (p + i);
        i++;
    }
        return NULL;
}
int main()
{
    char a[] = "yarin secimlere katilsam mi?";
    char *ptr = ft_memchr(a,'k',20);
    char *ptr1 = memchr(a,'k',20);
    printf("\n%p",(void *)ptr);
    printf("\n%p",(void *)ptr1);
}
