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
#endif