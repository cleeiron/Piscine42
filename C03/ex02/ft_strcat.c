/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 21:25:13 by cleiron           #+#    #+#             */
/*   Updated: 2025/09/27 17:25:26 by cleiron          ###   ########.fr       */
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

char *ft_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;
    
    while(dest[i] != '\0')
        i++;
        
    while(src[j] != '\0')
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
    
    /*ft_strcat(dest, src);
    ft_putstr(dest);*/
    write(1, "\n", 1);
    ft_putstr(strcat(dest, src));
    return 0;
}
