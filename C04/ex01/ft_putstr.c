/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 21:59:17 by cleiron           #+#    #+#             */
/*   Updated: 2025/09/30 22:01:02 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(void)
{
    ft_putstr("Camille");
    return 0;
}