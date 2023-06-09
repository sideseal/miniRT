/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gychoi <gychoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 22:02:37 by gychoi            #+#    #+#             */
/*   Updated: 2023/06/08 22:02:41 by gychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec_bonus.h"

t_vec3	sub(t_vec3 u, t_vec3 v)
{
	return (vec3_(u.ai - v.ai, u.bj - v.bj, u.ck - v.ck));
}
