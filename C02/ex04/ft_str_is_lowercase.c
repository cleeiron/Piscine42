/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 21:06:49 by cleiron           #+#    #+#             */
/*   Updated: 2025/09/16 21:19:16 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 97 && str[i] <= 122)
            i++;
        else
            return 0;
    }
    return 1;
}

int main(void)
{
    char *str = "cosmic";
    char *str1 = "Cosmic";

    printf("%d", ft_str_is_lowercase(str));
    printf("%d", ft_str_is_lowercase(str1));

    return 0;
}