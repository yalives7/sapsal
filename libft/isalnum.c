/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungor <sungor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 23:46:59 by sungor            #+#    #+#             */
/*   Updated: 2024/10/26 19:10:40 by sungor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  alfanumerik  sayilari yazdirmak icin 
int ft_isalnum(int c)
{
	if ((48 <= c && c <= 57) || (65 <= c && c <= 90) || ( 97 <= c && c <= 122))
		return 1;
	else 
		return 0;
}
#include <stdio.h>
int main()
{	
	
	
	printf("%d",ft_isalpha('9'));
}
