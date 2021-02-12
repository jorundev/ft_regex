/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   regex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroussea <hroussea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 13:22:06 by hroussea          #+#    #+#             */
/*   Updated: 2021/02/12 14:28:34 by hroussea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_regex.h"
#include <stdlib.h>

void	allocate_group_children(t_group *group, unsigned int n)
{
	group->nbr_children = n;
	group->child = malloc(n * sizeof(t_child));
}

void	regex_read(char *exp)
{
	if (exp[0] == '(')
}

void	regex_compile(char *exp, t_regex *rgx)
{
	
}
