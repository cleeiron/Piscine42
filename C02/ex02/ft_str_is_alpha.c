/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 10:30:54 by cleiron           #+#    #+#             */
/*   Updated: 2025/09/16 21:00:24 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int i = 0;
    
    while(str[i] != '\0')
    {
        if((str[i] >= 65 && str[i] <= 90 || str[i] == 0
        || str[i] >= 97 && str[i] <= 122))
        i++;
        else
        return (0);  
    }
    return (1);
}

int main(void)
{
    char *str = "Cosm!ic";
    char *str1 = "";
    printf("%d", ft_str_is_alpha(str));
    printf("%d", ft_str_is_alpha(str1));
    return 0;
}
