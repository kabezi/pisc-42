/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvirolai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 11:49:11 by kvirolai          #+#    #+#             */
/*   Updated: 2020/02/23 11:49:25 by kvirolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_H
# define EVAL_H

int		eval_expr(char *expr);
int		parse_sum(char **expr);
int		parse_factors(char **expr);
int		parse_number(char **expr);
#endif
