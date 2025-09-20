/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 20:36:32 by cleiron           #+#    #+#             */
/*   Updated: 2025/09/16 21:01:02 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int i = 0;

    while(str[i])
    {
        if(str[i] >= 48 && str[i] <= 57)
            i++;
        else
            return 0;
    }
    return 1;
}

int main(void)
{
    char *str = "Cosmic";
    char *str1 = "";

    printf("%d", ft_str_is_numeric(str));
    printf("%d", ft_str_is_numeric(str1));

    return 0;
}