/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 21:55:06 by cleiron           #+#    #+#             */
/*   Updated: 2025/09/16 22:07:09 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;   
    }
}

char *ft_strupcase(char *str)
{
    int i = 0;
    
    while(str[i] != '\0')
    {
        if(str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return str;
}

int main(void)
{
    char str[] = "Cosmic";
    char str1[] = "cosmic";
    
    ft_putstr(ft_strupcase(str));
    ft_putstr(ft_strupcase(str1));

    return 0;
}