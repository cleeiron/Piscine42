/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 19:44:50 by cleiron           #+#    #+#             */
/*   Updated: 2025/10/14 17:26:55 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(char* str)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    
    while(str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
            str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
                i++;
        
    while(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
        {
            sign = -sign;
        }
        i++; 
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
           result = result * 10 +(str[i] - '0');
           i++; 
    }
    return result * sign;
}

int main(void)
{
    char *str = " !d    df45e5d6f";
    printf("%d", ft_atoi(str));
    
}