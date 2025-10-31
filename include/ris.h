#ifndef RIS_H
# define RIS_H


typedef struct	e_rgb
{
	float	r;
	float	g;
	float	b;
}				t_rgb;

typedef struct	e_ambiant_light
{
	float	ratio;
	float	r;
	float	g;
	float	b;
}				t_ambiant_light;

typedef struct	e_vec3
{
	float	x;
	float	y;
	float	z;
}				t_vec3;


float	get_scalaire(t_vec3 vec1, t_vec3 vec2);
t_vec3	get_dir(t_vec3 origine, t_vec3 dest);
#endif