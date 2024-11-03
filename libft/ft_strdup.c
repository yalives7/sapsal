/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungor <sungor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:28:13 by sungor            #+#    #+#             */
/*   Updated: 2024/11/03 18:48:58 by sungor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
size_t ft_strlen(const char *s);
char *ft_strdup(const char *s1)
{
    
    int i = 0;
    if(s1 == NULL)
    return NULL;
    
    unsigned char *copy = (unsigned char *)malloc((ft_strlen(s1) + 1 )* sizeof(char));
    if(copy == NULL)
        return NULL;
    while(i < ft_strlen(s1))
    {
        copy[i] = s1[i];
        i++;
    }
    copy[i] = '\0';
    return (char*)copy;
}
int main()
{
    char a [10] ;
    char *tut = ft_strdup(a);
    char *tut2 = strdup(a);
    printf("%s",tut);
       printf("\n%s",tut2);
    free (tut);
}