/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 11:40:41 by cleiron           #+#    #+#             */
/*   Updated: 2025/08/28 20:52:16 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_put_nbr(int n)
{
    if(n >= 10)
    {
       ft_put_nbr(n / 10); 
    }
    ft_putchar(n %10 +'0');
}

void ft_print_tab(int *tab, int size)
{
   int i = 0;
   
   while(i < size)
   {
    ft_put_nbr(tab[i]);
    ft_putchar(' ');
    i++;
    if(i == size)
        ft_putchar('\n');
   }
}

void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int end = size -1;
    int temp;
    
    while(end > 0)
    {
        i = 0;
        while(i < end)
        {
            if(tab[i] > tab[i +1])
            {
                temp = tab[i];
                tab[i] = tab[i +1];
                tab[i +1] = temp;
            }
            i++;
        }
        end--;
    }
    
}

int main(void)
{
    int tab[] = {5, 6, 8, 3, 2, 1};
    int size = 4;
    
    ft_sort_int_tab(tab, size);
    ft_print_tab(tab, size);
    return 0;
}