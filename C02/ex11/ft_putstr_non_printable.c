/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 11:08:13 by cleiron           #+#    #+#             */
/*   Updated: 2025/09/18 12:02:07 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_hexa(char c)
{
     char *hex = "0123456789abcdef";
     
    ft_putchar(hex[c / 16]);
    ft_putchar(hex[c % 16]);
}

void ft_putstr_non_printable(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 0 && str[i] <= 31 || str[i] == 127)
        {
            ft_putchar('\\');
            ft_hexa((unsigned char)str[i]);
        }
        else
            ft_putchar(str[i]);
        i++;
    }
}

int main(void)
{
    char test[] = "Coucou\n tu \r _ \avas bien ?";
    
    ft_putstr_non_printable(test);
    ft_putchar('\n');
    return 0;
}
