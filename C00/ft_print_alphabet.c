/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 21:58:08 by cleiron           #+#    #+#             */
/*   Updated: 2025/08/12 22:12:33 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
    char a = 'a';
    
    while(a <= 'z')
    {
    write(1, &a, 1);
    a++;
    }
}
int main()
{
    ft_print_alphabet();
    return 0;
}