/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 00:29:12 by cleiron           #+#    #+#             */
/*   Updated: 2025/08/20 17:39:06 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if(nb == -2147483648)
        write(1, "-2147483648", 11);
    
    if(nb < 0)
    {
        ft_putchar('-');
        nb = nb * -1;
    }
    if(nb >= 0 && nb < 10)
    {
        ft_putchar(nb + '0');
    }
    else
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }     
}
int main()
{
    ft_putnbr(-106);
    return 0;
}