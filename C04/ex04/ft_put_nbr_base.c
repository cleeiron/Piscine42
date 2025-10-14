/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 21:54:26 by cleiron           #+#    #+#             */
/*   Updated: 2025/10/14 17:04:07 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int valid_base(char *base)
{
    int i = 0;
    
    while(base[i] != '\0')
    {
        i++;
    }
    if(i < 2)
        return 0;
    
    i = 0;
    while(base[i] != '\0')
    {
        
        if(base[i] == '+' || base[i] == '-' || base[i] == ' ' || base[i] == '\t' 
            || base[i] == '\n' || base[i] == '\r' 
            || base[i] == '\v' || base[i] == '\f')
            return 0;
            
        int j = i+1;
        while(base[j] != '\0')
        {
            if(base[i] == base[j])
                return 0;
                
            j++;
        }
        i++;
    }
    return 1;
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr_base(int nbr, char *base)
{
    int len = 0;
    long int n = nbr;
    
    if(!(valid_base(base)))
        return;

    while(base[len] != '\0')
    {
       len++; 
    }
    
    if(n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    
    if (n < len)
    {
        ft_putchar(base[n]);
        return;
    }
        
    ft_putnbr_base((n / len), base);
    ft_putchar(base[n % len]);
}

int main(void)
{
   char base[10] = "plouf2456";
   char base1[3] = "01";

   ft_putnbr_base(16, base);
   ft_putchar('\n');
   ft_putnbr_base(16, base1);
   
   return 0;
}