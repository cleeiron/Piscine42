/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 21:28:05 by cleiron           #+#    #+#             */
/*   Updated: 2025/08/15 21:50:25 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void)
{
    char nb1 = '0';
    char nb2 = '1';
    char nb3 = '2';

    
    while(nb1 <= '7')
    {
        while(nb2 <= '8')
        {
            while(nb3 <= '9')
            {
                write(1, &nb1, 1);
                write(1, &nb2, 1);
                write(1, &nb3, 1);
                if(!(nb1 == '7' && nb2 == '8' && nb3 == '9'))
                write(1, ", ", 2);
                nb3++;
            }
            nb3 = '3';
            nb2++;
        }
        nb2 = '2';
        nb1++;
    }
}
int main()
{
    ft_print_comb();
    return 0;
}