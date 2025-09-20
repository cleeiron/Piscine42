/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_capitalize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 10:01:58 by cleiron           #+#    #+#             */
/*   Updated: 2025/09/17 13:40:35 by cleiron          ###   ########.fr       */
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

int is_alnum(char c)
{
    if ((c >= 'A' && c <= 'Z') ||
        (c >= 'a' && c <= 'z') ||
        (c >= '0' && c <= '9'))
        return 1;
    else
        return 0;
}

char *ft_str_capitalize(char *str)
{
    int i = 0;
    int new_word = 1;

    while(str[i] != '\0')
    {
        if(is_alnum(str[i]))
        {
            if(new_word && str[i] >= 97 && str[i] <= 122)
            {
                str[i] = str[i] -32;
                new_word = 0;
            }
        }
        else
            new_word = 1;
        i++;
    }
    return str;
}

int main(void)
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    
    ft_putstr(ft_str_capitalize(str));

    return 0;
}
