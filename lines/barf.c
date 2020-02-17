/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   barf.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvirolai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 15:38:00 by kvirolai          #+#    #+#             */
/*   Updated: 2020/02/11 19:44:18 by kvirolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void    ft_print_alphabet(void)
{
    char ch;

    ch = 'a';
    while (ch <= 'z')
	{
	ft_putchar(ch);
	ch++;
	}
}

int     main()
{
    ft_print_alphabet();
	ft_putchar('\n');
    return (0);
}
