#include <stdio.h>
#include <string.h>
#include <stdlib.h>

   
   char *   ft_strnstr(const char *haystack, const char *needle, size_t len)
   {
     if( needle[0] == 0)
        return (char *)haystack;

    size_t i;
    size_t j;
    i = 0;
    while(i < len)
    {
        if((char)haystack[i] == (char)needle[0])
        {
            j = i+ 1;
            while((char)haystack[i + j] == (char)needle[j] && (i + j)< len && needle[j] != '\0' )
            {
                j++;
            }
            if( needle [j] != '\0')
            {
                return (char *)&haystack[i];
            }
        }
        i++;
    }
    return NULL;

   }
   
   int main()
   {
        char a[] = "sevilay";
        char *b = NULL;
       int x;
       
       printf("%s",ft_strnstr(a,b,7));
       /*
        printf("%p", b);
        printf("%s", b);
     printf("%p", &x);
        printf("%d", x);
        */
        

       
       
   }

