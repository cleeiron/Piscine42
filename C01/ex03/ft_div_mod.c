/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 15:15:43 by cleiron           #+#    #+#             */
/*   Updated: 2025/08/23 15:30:45 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void ft_div_mod(int a, int b, int *div, int * mod)
{
    *div = a/b;
    *mod = a%b;
}

int main(void)
{
    int a = 6;
    int b = 3;
    int div;
    int mod;

    ft_div_mod(a, b, &div, &mod);
    ft_putnbr(div);
    ft_putnbr(mod);
    return 0;
}