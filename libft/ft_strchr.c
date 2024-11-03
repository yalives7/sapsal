/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungor <sungor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:26:53 by sungor            #+#    #+#             */
/*   Updated: 2024/11/02 16:05:00 by sungor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

 int ft_strlen( const char *s);
 char *ft_strchr(const char *s, int c)
 {
    int n = ft_strlen(s);
    int i = 0;
   
   while (*s) {
        if (*s == (char)c) {
            return (char *)s;
        }
        s++;
    }
    if((char)c == '\0')
    return (char *)s;
    
    return NULL;
 }

 #include <stdio.h>
 int main()
 {
    char a[] = "sevilay";
    printf("%s",ft_strchr(a,'l'));
    printf("%s",strchr(a,'l'));
        
 }
 