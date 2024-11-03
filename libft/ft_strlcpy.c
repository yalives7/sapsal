#include <stdio.h>
#include <string.h>
#include <stddef.h>

size_t ft_strlen(const char *s);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
     if (src == NULL)
        return 0;

    size_t a = ft_strlen(src);

    if (dstsize == 0) 
        return a; 
    

    size_t i = 0;
    while (i < a && i < dstsize - 1) 
    {
        dst[i] = src[i];
        i++;
    }

    dst[i] = '\0';
    return a;
    
}
int main()
{
    char dest[] = "sevilay";
    char source[] = "kikokiki" ;
    char dst[] = "sevilay";
    char src[] = "kikokiki";
    printf("%zu\n",ft_strlcpy(dest,source,6));
    printf("%s\n",dest);
    printf("%zu\n",strlcpy(dst,src,6));
    printf("%s\n",dst);
}
