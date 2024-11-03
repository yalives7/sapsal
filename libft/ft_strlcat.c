/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungor <sungor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 09:28:47 by sungor            #+#    #+#             */
/*   Updated: 2024/11/03 15:45:54 by sungor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<stddef.h>
size_t ft_strlen(const char *s);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{

    //size_t s = ft_strlen(src);
    size_t d = ft_strlen(dst);
    size_t s = ft_strlen(src);
    size_t i ;
    i = 0;
    if(src == NULL)
        return 0;
    if(dst == NULL)
        return 0;
    if(dstsize <= d)
        return (s + dstsize);
    while(src[i] != '\0' && dstsize - 1 > (d + i))
    {
        dst[d + i] = src[i];
        i++;
    }
        dst[d + i] = '\0';
        return (d + s);
    
         
}
int main()
{
    char dest[30] = "calisma zamani";
    char source [] = "";
     char dest1[30] = "calisma zamani";
    char source1 [] = "iyiydi";
    printf(" benim fonksiyonumun sonucu : %zu  \nbenim son destimde yazan sey : %s",ft_strlcat(dest,source,16),dest);
    printf("\n gercek fonksiyonun sonucu %zu \n gercek fonksiyonun destinde yazan sey: %s",strlcat(dest1,source1,16),dest1);
}