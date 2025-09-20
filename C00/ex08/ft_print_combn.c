/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 00:54:20 by cleiron           #+#    #+#             */
/*   Updated: 2025/09/01 16:25:17 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb(int comb[], int n)
{
    int i = 0;
    
    while (i < n)
    {
        ft_putchar(comb[i] +'0');
        i++;
    }
    if(!(comb[0] == 10 - n))
        ft_putchar(',');
        ft_putchar(' ');    
}

void ft_print_combn(int n)
{
    int comb[9];
    int i = 0;
    
    if (n <= 0 || n >= 10)
    return;

    while (i < n)
    {
        comb[i] = i;
        i++;
    }

    while (comb[0] != 10 - n)
    {
        ft_print_comb(comb, n);

        i = n -1;
 
        while (i >= 0 && comb[i] == 10 - (n - i))
            i--;

        comb[i]++;
        i++;
        
        while (i < n)
        {
            comb[i] = comb[i - 1] + 1;
            i++;
        }
        
        i = 0;
    }
}
   
int main()
{
    ft_print_combn(4);
    return 0;
}