/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvirolai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 11:50:34 by kvirolai          #+#    #+#             */
/*   Updated: 2020/02/06 17:21:24 by kvirolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char ch;
	ch = 'a';
	while (ch <= 'z')
	{
		ft_putchar(ch);
		ch++;
	}
}