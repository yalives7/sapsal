/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungor <sungor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:00:11 by sungor            #+#    #+#             */
/*   Updated: 2024/11/02 18:44:02 by sungor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//eger kaynak ve hedef alanalari eslesiyorsa memcpyden se memmove kullanamak daha mantikli 
#include <stdio.h>
#include <stddef.h>
 int ft_strlen(char *ptr);
 void *ft_memcpy(void *dest, const void *src, size_t n);
 void *ft_memmove(void *dst, const void *src, size_t len)
 {
   unsigned char *dest = (unsigned char *)dst;
   unsigned char *source = (unsigned char *) src;

         unsigned char *copy[len];
         if(source < dest)      
        { 
         
         ft_memcpy(copy,source,len);  
          
         dst =ft_memcpy(dest,copy,len);
         return dst;
         }
         dst = ft_memcpy(dest,source,len);
         return dst;
 }
#include <string.h>
 int main()
 {
    char dest[200];   
    char src[40] =  "selam canim ben amcanim ";
    char src1[40] =  "selam canim ben amcanim ";
    char src2[39]="cozdum";
    char *dest1 = memmove(src + 8,src + 3,7);
    //char *dest2 = ft_memmove(src + 8,src+ 3,7);
    char *dest3 = memcpy(src1 + 8,src1 + 3,7);
   printf("%s\n",dest1);
  //  printf("%s\n",dest2);
     printf("%s\n",dest3);



    /*
    char a[20] = "eray";
    char b[56] = "sevilay";
    char *ptr1 = ft_memmove(a,a+2,2);
    char c[20] = "eray";
    char *ptr2 = memmove(c,c+2,2);
    printf("%s\n",ptr1);
    printf("%s\n",ptr2);
    printf("%s\n",a);
    printf("%s\n",c);*/
    
 }