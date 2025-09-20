/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revinttab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 16:51:56 by cleiron           #+#    #+#             */
/*   Updated: 2025/09/09 16:52:23 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int n)
{
    if(n < 10)
    {
        ft_putchar(n + '0');
    }
    if(n > 10)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
}

void ft_revinttab(int *tab, int size)
{
    
    int start = 0;
    int temp;
    int end = size -1;

    while(start < end)
    {
        temp = tab[start];
        tab[start] = tab[end];
        tab[end] = temp;
        start++;
        end--;
    }
    
}

void ft_print_tab(int *tab, int size)
{
    int i = 0;
    char c = ' ';
    
    while(i < size)
    {
        ft_putnbr(tab[i]);
        ft_putchar(c);
        i++;

        if(i == size)
            write(1, "\n", 1);
    }
}

int main(void)
{
    int tab[] = {1, 2, 3, 4, 5 ,6};
    int size = 6;
    ft_revinttab(tab, size);
    ft_print_tab(tab, size);
}