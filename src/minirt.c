#include "minirt.h"

static void ft_error(void)
{
	ft_printfd(2, "%s", mlx_strerror(mlx_errno));
	exit(EXIT_FAILURE);
}

static void ft_key_hook(mlx_key_data_t keydata, void* param)
{
	t_data	*data;

	data = param;
	if (keydata.key == MLX_KEY_ESCAPE && keydata.action == MLX_PRESS)
		mlx_close_window(data->mlx);
}

int32_t	main(void)
{
	t_data	*data;

	data = ft_calloc(sizeof(t_data));
	data->mlx = mlx_init(WIDTH, HEIGHT, "MiniRT", true);
	if (!data->mlx)
		ft_error();
	data->img = mlx_new_image(data->mlx, data->mlx->width, data->mlx->height);
	if (!data->img || mlx_image_to_window(data->mlx, data->img, 0, 0) < 0)
		ft_error();
	mlx_key_hook(data->mlx, &ft_key_hook, data);
	mlx_loop(data->mlx);
	mlx_delete_image(data->mlx, data->img);
	mlx_terminate(data->mlx);
	free(data);
	return (EXIT_SUCCESS);
}
