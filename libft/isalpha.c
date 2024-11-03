/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungor <sungor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:22:02 by sungor            #+#    #+#             */
/*   Updated: 2024/10/27 14:34:07 by sungor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
		if((65 <= c && c <= 90) || ( 97 <= c && c <= 122))
			return 1;
		else 
 			return 0;

}
 #include <string.h>
 int main()
 {
    char a[20] ;
    char b[56] = "sevilay";
    char *ptr1 = ft_memmove(a,a,8);
    char c[20] ;
    char *ptr2 = memmove(c,c,8);
    printf("%s\n",ptr1);
    printf("%s\n",ptr2);
    printf("%s\n",a);
    printf("%s\n",c);
    
 }
#include <stdio.h>
int main()
{
	printf("%d",ft_isalpha('y'));
}

