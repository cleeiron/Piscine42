/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 19:44:50 by cleiron           #+#    #+#             */
/*   Updated: 2025/10/02 21:51:42 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
