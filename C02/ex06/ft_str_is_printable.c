/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 21:37:23 by cleiron           #+#    #+#             */
/*   Updated: 2025/09/17 09:47:22 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 32 && str[i] <= 126)
            i++;
        else 
            return 0;
    }
    return 1;      
}

int main(void)
{
    char *str = "cosmic";
    char *str1;

    printf("%d", ft_str_is_printable(str));
    printf("%d", ft_str_is_printable(str1));
    
   return 0; 
}