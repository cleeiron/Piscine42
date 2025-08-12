/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 22:38:47 by cleiron           #+#    #+#             */
/*   Updated: 2025/08/12 22:50:44 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n)
{
    char N = 'N';
    char P = 'P';
    
    if(n >= 0)
    {
        write(1, &P, 1);
    }
    else write(1, &N, 1);
}
int main()
{
    ft_is_negative(-2);
    return 0;
}