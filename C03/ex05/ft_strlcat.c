/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 20:51:45 by cleiron           #+#    #+#             */
/*   Updated: 2025/09/30 21:45:50 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int dlen = 0;
    unsigned int slen = 0;
    unsigned int i = 0;
    unsigned int dlen0;

    while(dest[dlen] != '\0' && dlen < size)
    {
        dlen++;
    }

    dlen0 = dlen;
    
    while(src[slen] != '\0')
    {
        slen++;
    }
    
    if(dlen == size)
        return size+slen;
        
    while(src[i] != '\0' && (dlen + 1) < size)
    {
        dest[dlen++]= src[i++];
    }
    
    dest[dlen] = '\0';
    
    return dlen0 +slen;
}

int main(void)
{
    char dest[]= "Lofi Girls";
    char src[]= "moitié, moitié";

    printf("%d\n", ft_strlcat(dest, src, 10));
    return 0;
}