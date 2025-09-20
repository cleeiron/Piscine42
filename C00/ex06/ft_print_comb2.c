/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 21:57:24 by cleiron           #+#    #+#             */
/*   Updated: 2025/08/16 18:34:44 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void)
{
    char nb1 = '0';
    char nb2 = '0';
    char nb3 = '0';
    char nb4 = '0';
    
    while(nb1 <= '9')
    {
        while(nb2 <= '8')
        {
            nb3 = nb1;
            nb4 = nb2 + 1;
            if(nb4 == ':')
            {
                nb3 = nb1 +1;
                nb4 = '0';
            }
            while(nb3 <= '9')
            {
                while(nb4 <= '9')
                {
                    write(1, &nb1, 1);
                    write(1, &nb2, 1);
                    write(1, " ", 1);
                    write(1, &nb3, 1);
                    write(1, &nb4, 1);
                    if(!(nb1 == '9' && nb2 == '8' && nb3 == '9' && nb4 == '9'))
                    write(1, ", ", 2);
                    nb4++;
                    
                }
                nb3++;
                nb4 ='0';
            }
            nb2++;
        }
        nb1++;
        nb2 = '0';
    }
}

int main()
{
    ft_print_comb2();
    return 0;
}