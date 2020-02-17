/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maini.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvirolai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 12:55:44 by kvirolai          #+#    #+#             */
/*   Updated: 2020/02/16 21:22:16 by kvirolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include <stdio.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
void	output1(int i, int y)
{
	if(i == 1 || i == y)
			ft_putchar ('o');
			else
	ft_putchar ('i');
	}

void rush(int x, int y,)
{
int	j;
int j;
	i = 1;
	while (j <= y)
	{
	j =1;
	while (j <= x)
	{
	if (j == 1 || j == x)
		output1(i, y);
	else
	{
		if(i == 1 || i == y)
			ft_putchar('-');
		else
			ft_putchar(' ');
	}
	j++;
	}
	i==;
	ft_putchar('\n');
	}
}

int main(void)
{
	rush(5, 5);
	return (0);
}
