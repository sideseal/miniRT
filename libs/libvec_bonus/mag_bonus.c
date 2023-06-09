/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mag_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gychoi <gychoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 22:01:57 by gychoi            #+#    #+#             */
/*   Updated: 2023/06/08 22:02:01 by gychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec_bonus.h"

double	mag(t_vec3 v)
{
	return (sqrt(mag_sq(v)));
}
