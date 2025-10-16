/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:06:26 by cleiron           #+#    #+#             */
/*   Updated: 2025/10/16 17:35:20 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int valid_base( char *base)
{
    int len = 0;
    int i = 0;
    int j = 0;

    while(base[len] != '\0')
    {
        len++;
    }

    if(len < 2)
        return 0;
    
    while(base[i] != '\0')
    {
        if(base[i] == '+' || base[i] == '-' || base[i] == ' ' || base[i] == '\t' 
            || base[i] == '\n' || base[i] == '\r' 
            || base[i] == '\v' || base[i] == '\f')
            return 0;
        
        j = i+1;
        
        while(base[j] != '\0')
        {
            if(base[i] == base[j])
                return 0;
            
            j++;
        }
        i++;
    }
    return 1;
}

int index_base(char *base, char c)
{
    int i = 0;
    
    while(base[i] != '\0')
    {
           if(base[i] == c)
            return i;
            
          i++;
    }
    return -1;
}

int ft_atoi_base(char *str, char *base)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    int len = 0;
    int c;
    
    if(!valid_base(base))
        return 0;
    
    while(base[len] != '\0')
    {
        len++;
    }
    
    while(str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
            str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
                i++;
    while(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            sign = -sign;
        
        i++;
    }
    
    c = index_base(base, str[i]);
    
    while(c != -1)
    {
        result = result * len + c;
        i++;
        c = index_base(base, str[i]);
    }
    return result * sign;
}

int main(void)
{
    char *base = "abcdef012456789";
    char *str = "1245cef";

    printf("%d", ft_atoi_base(str, base));
    
    return 0;
}
