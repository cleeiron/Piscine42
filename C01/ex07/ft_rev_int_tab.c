/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 21:54:09 by cleiron           #+#    #+#             */
/*   Updated: 2025/09/09 16:24:01 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_put_nbr(int n)
{
    if (n == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }
    if (n < 0)
    {
        ft_putchar('-');
        n *= -1;
    }
    if (n >= 10) 
    {
        ft_put_nbr(n / 10);
    }
    ft_putchar(n % 10 + '0');
}

void print_tab(int *tab, int size)
{
    int i = 0;
    while (i < size)
    {
        ft_put_nbr(tab[i]);
            write(1, " ", 1);
        i++;
        if(i == size)
            write(1, "\n", 1);
}
}

void ft_rev_int_tab(int *tab, int size)
{
    int start = 0;
    int end = size -1;
    int temp;
    
    while(start < end)
    {
        temp = tab[start];
        tab[start] = tab[end];
        tab[end] = temp;
        start++;
        end--;
    }
    
}
int main(void)
{
    int tab[] = {8, 5, 4, 8, 2};
    int size = 5;

    ft_rev_int_tab(tab, size);
    print_tab(tab, size);
    return 0;
}