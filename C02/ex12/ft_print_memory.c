/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 12:04:48 by cleiron           #+#    #+#             */
/*   Updated: 2025/09/26 21:31:24 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_adress(void *addr)
{
    unsigned long adress = (unsigned long)addr;
    char *hex = "0123456789abcdef";
    char buffer[16];
    int i = 15;
    
    while(i >= 0)
    {
        buffer[i] = hex[adress % 16];
        adress /= 16;
        i--;
    }
    write(1, buffer, 16);
    write(1, ":", 1);
}

void put_hex_byte(unsigned char b)
{
    char *hex = "0123456789abcdef";
    char duo[2];
    duo[0] = hex[b / 16];
    duo[1] = hex[b % 16];
    write(1, duo, 2);
}

void *ft_print_memory(void *addr, unsigned int size)
{
    unsigned char *p = (unsigned char *)addr;
    unsigned int j = 0;

    if (size == 0)
        return addr;

    while (j < size)
    {
        unsigned int i = 0;
        unsigned int n;

        if (size - j >= 16)
            n = 16;
        else
            n = size - j;

        ft_print_adress(p + j);
        write(1, " ", 1);

        i = 0;
        while (i < 16)
        {
            if (i < n)
                put_hex_byte(p[j + i]);
            else
                write(1, "  ", 2);

            if (i % 2 == 1)
                write(1, " ", 1);
            i++;
        }

        write(1, " ", 1);

        i = 0; 
        while (i < n)
        {
            unsigned char c = p[j + i];
            if (c >= 32 && c <= 126)
                write(1, &c, 1);
            else
                write(1, ".", 1);
            i++;
        }

        write(1, "\n", 1);
        j += 16;
    }
    return addr;
}
void *ft_print_memory(void *addr, unsigned int size);

int main(void)
{
    char str1[] = "Salut, comment tu vas ?";  
    char str2[] = "42 est la reponse universelle a tout. Une phrase un peu plus longue pour tester plusieurs lignes...";
    char str3[] = "";

    write(1, "=== Test 1 : phrase courte ===\n", 31);
    ft_print_memory(str1, sizeof(str1) - 1);
    write(1, "\n", 1);

    write(1, "=== Test 2 : phrase longue ===\n", 32);
    ft_print_memory(str2, sizeof(str2) - 1);
    write(1, "\n", 1);

    write(1, "=== Test 3 : chaine vide ===\n", 30);
    ft_print_memory(str3, 0);
    write(1, "\n", 1);

    write(1, "=== Test 4 : binaire ===\n", 26);
    char bin[32];
    int i = 0;
    while (i < 32)
    {
        bin[i] = i;
        i++;
    }
    ft_print_memory(bin, 32);
    write(1, "\n", 1);

    return 0;
}