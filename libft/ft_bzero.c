/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungor <sungor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:41:48 by sungor            #+#    #+#             */
/*   Updated: 2024/10/27 02:15:21 by sungor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
//#include "libft.h"
void *ft_memset(void *ptr, int c, size_t len);
void ft_bzero(void *s, size_t n)
{
    s = ft_memset(s,0,n); 
}

int main()
{
    char a[30] = "biz bu gece sabahlayanzi";
    ft_bzero(a,5);
    int i;
    i = 0;
    while(i < 30)
    {
        printf("%c",a[i]);
        i++;
    }
    printf("\n---------\n");
    printf("%c", a[0]);
}