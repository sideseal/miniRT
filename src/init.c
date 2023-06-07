/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gychoi <gychoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 22:25:39 by gychoi            #+#    #+#             */
/*   Updated: 2023/06/07 15:58:48 by gychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

static t_ambient	_init_ambient(void)
{
	t_ambient	ambient;

	ambient.color = color3_(0, 0, 0);
	ambient.lighting_ratio = INITIAL_VALUE;
	return (ambient);
}

static t_canvas	_init_canvas(int height)
{
	t_canvas	canvas;

	canvas.aspect_ratio = 16.0 / 9.0;
	canvas.height = height;
	canvas.width = height * canvas.aspect_ratio;
	return (canvas);
}

static t_light	*_init_light(t_data *data)
{
	t_light		*light;
	t_point3	origin;
	t_color3	color;
	double		bright_ratio;

	origin = point3_(0, 0, 0);
	color = color3_(1, 1, 1);
	bright_ratio = INITIAL_VALUE;
	light = light_(origin, color, bright_ratio, data);
	return (light);
}

static t_scene	*_init_scene(t_data *data)
{
	t_scene	*scene;

	scene = rt_malloc(sizeof(t_scene), data);
	scene->canvas = _init_canvas(HEIGHT);
	scene->camera = \
		camera_(scene->canvas, point3_(0, 0, 0), vec3_(0, 0, 1), INITIAL_VALUE);
	scene->ambient = _init_ambient();
	scene->lights = \
		object_(LIGHT_POINT, _init_light(data), color3_(1, 1, 1), data);
	scene->objects = NULL;
	return (scene);
}

t_data	*init_data(void)
{
	t_data	*data;
	int		width;
	int		height;

	data = rt_malloc(sizeof(t_data), NULL);
	data->scene = _init_scene(data);
	width = data->scene->canvas.width;
	height = data->scene->canvas.height;
	data->mlx = NULL;
	data->win = NULL;
	data->img.img = NULL;
	data->img.addr = NULL;
	data->mlx = rt_mlx_init(data);
	data->win = rt_mlx_new_window(data, width, height, "miniRT");
	data->img.img = rt_mlx_new_image(data, width, height);
	data->img.addr = rt_mlx_get_data_addr(data);
	return (data);
}
