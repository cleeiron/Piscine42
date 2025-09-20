/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 16:06:05 by cleiron           #+#    #+#             */
/*   Updated: 2025/08/23 16:09:19 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
    char str[] = "Cosmic";
    ft_strlen(str);
    return 0;
}