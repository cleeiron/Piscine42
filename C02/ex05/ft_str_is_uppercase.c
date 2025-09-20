/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 21:21:50 by cleiron           #+#    #+#             */
/*   Updated: 2025/09/16 21:29:05 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 65 && str[i] <= 90)
            i++;
        else
            return 0;
    }
    return 1;
}

int main(void)
{
    char *str = "COSMIC";
    char *str1 = "Cosmic";
    char *str2 = "";
    
    printf("%d", ft_str_is_uppercase(str));
    printf("%d", ft_str_is_uppercase(str1));
    printf("%d", ft_str_is_uppercase(str2));

    return 0;
}