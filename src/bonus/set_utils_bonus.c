/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_utils_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gychoi <gychoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:54:35 by gychoi            #+#    #+#             */
/*   Updated: 2023/06/11 20:00:37 by gychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt_bonus.h"

t_bool	set_vars_value(char *elem, void *value, int type)
{
	int		error;

	error = FALSE;
	if (type == D_FLOAT)
		*(double *)value = rt_atof(elem, &error);
	else if (type == D_INT)
		*(int *)value = ft_atoi(elem);
	else if (type == P_RADIUS)
		*(double *)value = rt_atof(elem, &error) / 2.0;
	else
		error = TRUE;
	return (!error);
}

t_bool	set_vars_csv(char *elem, void *csv, int type_s)
{
	int		err;
	char	**tokens;

	err = FALSE;
	tokens = ft_split(elem, ',');
	if (type_s == S_COLOR)
		*(t_point3 *)csv = color3_(rt_atof(tokens[0], &err) / 255, \
			rt_atof(tokens[1], &err) / 255, rt_atof(tokens[2], &err) / 255);
	else if (type_s == S_POINT)
		*(t_point3 *)csv = point3_(rt_atof(tokens[0], &err), \
			rt_atof(tokens[1], &err), rt_atof(tokens[2], &err));
	else if (type_s == S_VEC)
		*(t_vec3 *)csv = vec3_(rt_atof(tokens[0], &err), \
			rt_atof(tokens[1], &err), rt_atof(tokens[2], &err));
	else
		err = TRUE;
	free_tokens(tokens);
	return (!err);
}
