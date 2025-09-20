/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srtinttab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 13:25:09 by cleiron           #+#    #+#             */
/*   Updated: 2025/09/13 16:40:57 by cleiron          ###   ########.fr       */
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
    ft_putchar(n %10 +'0');
}

void ft_printcomb(int *tab, int size)
{
    int i = 0;
    char c = ' ';

    while(i < size)
    {
        ft_putnbr(tab[i]);
        ft_putchar(c);
        i++;
        
        if(i == size)
        {
            write(1, "\n", 1);
        }
        
    }
}

void ft_sortinttab(int *tab, int size)
{
    int i = 0;
    int end = size -1;
    int temp;
    
    while(end > 0)
    {
        i = 0;
         while(i < end)
        {
            if(tab[i] > tab[i+1])
            {
                temp = tab[i];
                tab[i] = tab[i+1];
                tab[i+1] = temp;
                
            }
            i++;
        }
        end--;
    }   
}

int main(void)
{
    int tab[] = {6, 3, 9, 7, 2};
    int size = 5;

    ft_sortinttab(tab, size);
    ft_printcomb(tab, size);
    
    return 0;
}