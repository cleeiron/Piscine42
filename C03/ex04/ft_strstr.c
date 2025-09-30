/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 13:41:46 by cleiron           #+#    #+#             */
/*   Updated: 2025/09/30 17:44:49 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find)
{
    int i = 0;
    int j = 0;
    
    if(to_find[i] == '\0')
        return str;
    
    while(str[i] != '\0')
    {
        j= 0;
        
        while(str[i+j] != '\0' && to_find[j] != '\0'
        && str[i+j] == to_find[j])
        {
            j++;
        }
        if(to_find[j] == '\0')
            return &str[i];
        
        i++;
    }
    return NULL;
}

int main(void)
{
    char str[30] = "Bonjour je m'appelle Eden";

    printf("%s\n", ft_strstr(str, "maybe"));

    return 0;
}