/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 12:04:48 by cleiron           #+#    #+#             */
/*   Updated: 2025/09/18 18:36:07 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_adress(void *addr)
{
    unsigned long adress = (unsigned long)addr;
    char *hex = "0123456789abcdef";
    char buffer[16];
    int i = 15;
    
    while(i >= 0)
    {
        buffer[i] = hex[adress % 16];
        adress /= 16;
        i--;
    }
    write(1, buffer, 16);
    write(1, ":", 1);
}

void *ft_print_memory(void *addr, unsigned int size)
{
    unsigned int i = 0;

    while(i < 16)
    {
        if(i < size)
        {
            ft_print_adress(addr[i]);
        }
        else
        {
            write(1, " ", 1);
        }
        if(i % 2 == 1)
        {
            write(1, " ", 1);
        }
        i++;
    }
}