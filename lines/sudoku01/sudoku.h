/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvirolai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 17:52:24 by kvirolai          #+#    #+#             */
/*   Updated: 2020/02/16 19:28:58 by kvirolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H

#define SUDOKU_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int read_sudoku(int argc, char *argv[]);

int sub_main();

#endif
