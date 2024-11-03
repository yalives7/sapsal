/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungor <sungor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 00:40:16 by sungor            #+#    #+#             */
/*   Updated: 2024/10/27 02:08:49 by sungor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <limits.h>

void *ft_memset(void *ptr, int c, size_t len) {
    unsigned char *p ;
    p = ptr;
    size_t i;
    i = 0;
    while(i < len)
    {
        p[i] = (unsigned char)c; 
        i++;
    }
    return ptr; 
}

// #include <stdio.h>
// int main() 
// {
 
// char a[20] = "sevilayungor";
// int b[5] = {1,456,7,8,9};
// int *t =ft_memset(b,'\0',sizeof(b));
// int i = 0;
// char *p = ft_memset(a,'e',5);
// for(i = 0; i < 20 ;i++)
// {
//  printf("%c",p[i]);   
// }
//    printf("\n");
// for(i = 0; i < 5 ;i++)
// {
//  printf("%d\n",t[i]);   
// }
// }

