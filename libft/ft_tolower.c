/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungor <sungor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:21:19 by sungor            #+#    #+#             */
/*   Updated: 2024/10/27 18:24:30 by sungor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_tolower(int c)
{
    if( 65 <= c && c <= 90)
     c += 32;

      return c;   
}

int main()
{
    char a = 'P';
    printf("%c",ft_tolower(a));
}