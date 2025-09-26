/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 16:42:13 by cleiron           #+#    #+#             */
/*   Updated: 2025/09/26 19:44:20 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <string.h>

int ft_strcmp(char *s1,char *s2)
{
    int i = 0;
    
    while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    {
        i++;
    }
    return (s1[i] - s2[i]);    
}

int main(void)
{
    char s1[] = "Cosmic";
    char s2[] = "Travels";

	printf("%d, %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
    return 0;
}
