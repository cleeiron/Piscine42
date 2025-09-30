/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 21:54:24 by cleiron           #+#    #+#             */
/*   Updated: 2025/09/30 21:57:33 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
    int len = 0;

    while(str[len] != '\0')
    {
        len++;
    }
    return len;
}

int main(void)
{
    printf("%d\n", ft_strlen("Dual"));

    return 0;
}
