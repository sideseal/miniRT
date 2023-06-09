/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redef_libf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gychoi <gychoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:58:16 by gychoi            #+#    #+#             */
/*   Updated: 2023/06/12 14:50:25 by gychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

double	rt_atof(const char *str, t_bool *is_error)
{
	size_t	i;
	double	ret;
	int		precision;
	int		sign;

	*is_error = FALSE;
	sign = 1;
	ret = rt_atoi(str, is_error, &sign);
	if (*is_error == TRUE)
		return (*is_error);
	i = 0;
	while (str[i] && str[i] != '.')
		++i;
	if (str[i] == 0 || (str[i] == '.' && str[i + 1] == 0))
		return (ret);
	if (sign > 0)
		ret += \
			tollp(str, i + 1, &precision, is_error) * pow(10, -1 * precision);
	else
		ret -= \
			tollp(str, i + 1, &precision, is_error) * pow(10, -1 * precision);
	return (ret);
}

void	rt_close(int fd, t_vars *vars)
{
	if (close(fd) < 0)
		print_error("close ", vars);
	return ;
}

int	rt_open(char *file, int flag, t_vars *vars)
{
	int	fd;

	fd = open(file, flag);
	if (fd < 0)
		print_error("open ", vars);
	return (fd);
}

void	*rt_malloc(size_t size, t_vars *vars)
{
	void	*ret;

	ret = malloc(size);
	if (ret == NULL)
		print_error("malloc ", vars);
	return (ret);
}
