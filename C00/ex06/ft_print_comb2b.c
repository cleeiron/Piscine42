/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 19:40:43 by cleiron           #+#    #+#             */
/*   Updated: 2025/08/17 00:19:06 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb2b(void)
{
    int a1 = 0;
    int b1 = 0;
    char nb1;
    char nb2;

    while(a1 <= 98)
    {
        
        while(b1 <= 99)
        {
                ft_putchar(a1 / 10 + '0');
                ft_putchar(a1 % 10 + '0');
                ft_putchar(' ');
                ft_putchar(b1 / 10 + '0');
                ft_putchar(b1 % 10 + '0');
                if(!( a1 == 98 && b1 == 99))
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                b1++;
        }
        a1++;
        b1 = a1 +1;
    }
}

int main()
{
    ft_print_comb2b();
    return 0;
}