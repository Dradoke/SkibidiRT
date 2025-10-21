#ifndef STRUCT_H
# define STRUCT_H
# include "minirt.h"

//••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••
// GLOBAL STRUCT

typedef struct s_data
{
	mlx_t       *mlx;
	mlx_image_t *img;
	t_scene		scene;
}   t_data;

//••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••
// ENUM

typedef enum	e_bool
{
	FALSE,		// 0
	TRUE,		// 1
}				t_bool;

typedef enum	e_type
{
	FALSE,		// 0
	TRUE,		// 1
}				t_type;

//••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••
// MLX42

typedef struct s_vec3
{
	double	x;
	double	y;
	double	z;
}	t_vec3;

typedef struct	s_ray
{
	t_vec3	origin;
	t_vec3	dir;
}				t_ray;

typedef struct	s_mat4
{
	double m[4][4];
}				t_mat4;

//••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••
// MINIRT

typedef struct	s_amb_light
{
	t_type	type;
	float	ratio;
	t_rgba	color;
}				t_amb_light;

typedef struct	s_cam
{
	int		id;
	t_type	type;
	t_vec3	location;
	t_vec3	rotation;
	char	aov;
}				t_cam;

typedef struct	s_light
{
	int		id;
	t_type	type;
	t_vec3	location;
	float	brightness;
	t_rgba	color;
}				t_light;

typedef struct	s_scene
{
	t_list		*camera;
	t_amb_light	amb_light;
	t_list		*light;
	t_list		*mesh;
}				t_scene;

//••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••
// MESHES

typedef struct	s_sphere
{
	t_vec3			center;
	double			radius;
	unsigned int	color;
}				t_sphere;

//••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••
// COLORS

typedef struct s_rgba
{
	unsigned char	r;	// >=0 && <=255
	unsigned char	g;	// >=0 && <=255
	unsigned char	b;	// >=0 && <=255
	unsigned char	a;	// >=0 && <=255
}	t_rgba;

typedef struct s_hsba
{
	unsigned char	h;	// >=0 && <=255
	unsigned char	s;	// >=0 && <=255
	unsigned char	b;	// >=0 && <=255
	unsigned char	a;	// >=0 && <=255
}	t_hsba;

//••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••
#endif