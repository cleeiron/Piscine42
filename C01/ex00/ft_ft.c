/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 21:58:07 by cleiron           #+#    #+#             */
/*   Updated: 2025/08/19 22:28:17 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(void)
{
    int a;
    
    ft_ft(&a);
    if(a >= 10)
    {
        ft_putchar((a / 10) + '0');
        ft_putchar((a % 10) + '0');
    }
    return 0;
}