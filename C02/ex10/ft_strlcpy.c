/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 13:43:39 by cleiron           #+#    #+#             */
/*   Updated: 2025/09/18 11:03:03 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlen(char *str)
{
    unsigned int len = 0;
    
    while(str[len] != '\0')
        len++;
        
    return len;    
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;
    unsigned int len = ft_strlen(src);
    
    if(size == 0)
        return len;
    
    while(src[i] != '\0' && i < size -1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return len;
}

int main(void)
{
    char *src = "Cosmic";
    char dest[7];

    printf("%d", ft_strlcpy(dest, src, 7));
    return 0;
    
}