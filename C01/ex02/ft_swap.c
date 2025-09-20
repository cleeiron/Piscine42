/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 14:59:08 by cleiron           #+#    #+#             */
/*   Updated: 2025/08/23 15:13:27 by cleiron          ###   ########.fr       */
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
        write(1,"-", 1);
        n = n *1;
    }
    if(n >= 0 && n <= 9)
        ft_putchar(n + '0');
    else
    {
        ft_putnbr(n / 10);
        ft_putnbr(n %  10);
    }
}

void ft_swap(int *a, int *b)
{
    int swap;

    swap = *a;
    *a = *b;
    *b = swap;
}

int main(void)
{
    int a = 3;
    int b = 6;
    int *p1 = &a;
    int *p2 = & b;
    
    ft_swap(p1, p2);
    ft_putnbr(a);
    ft_putnbr(b);
    return 0;
}