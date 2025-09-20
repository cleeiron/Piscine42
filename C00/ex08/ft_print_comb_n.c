/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_n.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 16:40:42 by cleiron           #+#    #+#             */
/*   Updated: 2025/09/13 18:27:05 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int n)
{
    if(n >= 10)
    {
        ft_putnbr(n / 10);
    }
    ft_putchar(n % 10 + '0');
}

int is_last(int *comb, int n)
{
    int i = 0;

    while(i < n)
    {
        if(comb[i] != 10 - n +i)
            return 0;
        i++;
    }
    return 1;
}
void ft_print_comb(int *comb, int n)
{
    int i = 0;
    
    while(i <n)
    {
        ft_putnbr(comb[i]);
        i++; 
    }

    if(!(is_last(comb, n)))
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void ft_print_combn(int n)
{
    int i;
    int j;
    int comb[10];

    if(n <= 0 || n >= 10)
        return;
    
    i = 0;
    while(i < n)
    {
        comb[i] = i;
        i++;
    }
    ft_print_comb(comb, n);
    
    while(!(is_last(comb, n)))
    {
        i = n -1;
        
        while (i >= 0 && comb[i] == 10 - (n - i))
            i--;
        
        comb[i]++;
        j = i +1;
        while(j < n)
        {
            comb[j] = comb[j -1] +1;
            j++;
        }
        ft_print_comb(comb, n);
    }
}

int main(void)
{
    ft_print_combn(2);
    return 0;
}
