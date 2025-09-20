/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 09:48:39 by cleiron           #+#    #+#             */
/*   Updated: 2025/09/17 09:56:07 by cleiron          ###   ########.fr       */
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

char *ft_strlowcase(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return str;
}

int main(void)
{
    char str[] = "CosMic";
    char str1[] = "cO ,Micc";
    
    ft_putstr(ft_strlowcase(str));
    ft_putstr(ft_strlowcase(str1));

    return 0;
    
}