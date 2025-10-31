#ifndef STRUCT_H
# define STRUCT_H
# include "minirt.h"
//••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••
// MLX42

//••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••

typedef enum e_bool
{
	FALSE,		// 0
	TRUE,		// 1
}	t_bool;

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

typedef struct	s_sphere
{
	t_vec3			center;
	double			radius;
	unsigned int	color;
}				t_sphere;

typedef struct	s_plane
{
	t_vec3	center;
	t_vec3	norm_vector;
	t_rgb	color;
}				t_plane;
#endif