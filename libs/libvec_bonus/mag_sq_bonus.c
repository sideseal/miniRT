/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mag_sq_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gychoi <gychoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 22:02:05 by gychoi            #+#    #+#             */
/*   Updated: 2023/06/08 22:02:09 by gychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec_bonus.h"

double	mag_sq(t_vec3 v)
{
	return (v.ai * v.ai + v.bj * v.bj + v.ck * v.ck);
}
