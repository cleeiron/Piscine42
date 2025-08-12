/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 22:29:55 by cleiron           #+#    #+#             */
/*   Updated: 2025/08/12 22:36:05 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)
{
    char nb;
    nb = '0';
    
    while(nb <= '9')
    {
        write(1, &nb, 1);
        nb++;
    }
}
int main()
{
    ft_print_numbers();
    return 0;
}