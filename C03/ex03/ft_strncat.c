/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 17:20:12 by cleiron           #+#    #+#             */
/*   Updated: 2025/09/27 17:36:58 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void ft_putstr(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i = 0;
    unsigned int j = 0;
    
    while(dest[i] != '\0')
    {
        i++;
    }
    while(src[j] != '\0' && j < nb)
    {
        dest[i++] = src[j++];
    }
    dest[i] = '\0';
    return dest;
}

int main(void)
{
    char dest[30] = "Travel ";
    char src[] = "Cosmic";
    
    ft_strncat(dest, src, 6);
    ft_putstr(dest);
    write(1, "\n", 1);
    /*ft_putstr(strncat(dest, src, 6));*/
    return 0;
}