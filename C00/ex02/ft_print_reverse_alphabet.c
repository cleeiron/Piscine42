/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 22:21:53 by cleiron           #+#    #+#             */
/*   Updated: 2025/08/12 22:25:41 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    char c;
    c = 'z';
    
    while(c >= 'a')
    {
        write(1, &c, 1);
        c--;
    }
}
int main()
{
    ft_print_reverse_alphabet();
    return 0;
}