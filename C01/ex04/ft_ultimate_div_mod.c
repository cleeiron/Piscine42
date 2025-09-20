/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 15:34:44 by cleiron           #+#    #+#             */
/*   Updated: 2025/08/23 15:47:03 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int n)
{
    if(n == -2147483648)
        write(1, "-2147483648", 12);
    
    if(n < 0)
    {
        ft_putchar('-');
        n = n *1;
    }
    if(n >= 0 && n <= 9)
        ft_putchar(n +'0');
    else{
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
}

void ft_ultimate_div_mod(int *a, int *b)
{
    int tempa;
    int tempb;
    tempa = *a;
    tempb = *b;
    *a = tempa / tempb;
    *b = tempa % tempb;
}

int main(void)
{
    int a = 6;
    int b = 2;

    ft_ultimate_div_mod(&a, &b);
    ft_putnbr(a);
    ft_putnbr(b);
    return 0;
}