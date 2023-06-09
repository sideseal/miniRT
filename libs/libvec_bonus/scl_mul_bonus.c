/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scl_mul_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gychoi <gychoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 22:02:28 by gychoi            #+#    #+#             */
/*   Updated: 2023/06/08 22:02:32 by gychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec_bonus.h"

t_vec3	scl_mul(double t, t_vec3 v)
{
	return (vec3_(t * v.ai, t * v.bj, t * v.ck));
}
