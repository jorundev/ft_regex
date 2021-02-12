/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_regex.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroussea <hroussea@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 17:29:06 by hroussea          #+#    #+#             */
/*   Updated: 2021/02/12 14:28:33 by hroussea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_REGEX_H
# define FT_REGEX_H

typedef struct s_regex_group {
	unsigned int	nbr_children;
	t_child			*child;
}	t_group;

typedef enum e_child_type {
	CHILD_ATOM,
	CHILD_GROUP,
}	t_child_type;

typedef enum e_atom_type {
	ATOM_RANGE,
	ATOM_SINGLE,
	ATOM_ANY,
}	t_atom_type;

typedef union u_atom_range {
	struct {
		char	c0;
		char	c1;
	};
	char	c[2];
}	t_atom_range;

typedef struct s_atom {
	t_atom_type	type;
	union {
		t_atom_range	as_range;
	};
}	t_atom;

typedef struct s_child {
	t_child_type	type;
	union {
		t_atom	as_atom;
		t_group	as_group;
	};
}	t_child;

typedef struct s_regex {
	t_group	*root;
}	t_regex;

void	regex_compile(char *exp, t_regex *rgx);

#endif
