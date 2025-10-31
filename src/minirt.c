#include "minirt.h"
/*Cette fonction prend la direction candidate Xj  et le point d'ombrage P comme entrées, et retourne un vecteur de flottants RVB.*/
// t_rgb	*get_distrib_cible_potential(t_vec3 dir, t_vec3 pos)
// {

// }

// t_vec3	get_vector(t_vec3 origine, t_vec3 dest)
// {
// 	return ((t_vec3){dest.x - origine.x, dest.y - origine.y,
// 		dest.z - origine.z});
// }

t_vec3	get_dir(t_vec3 origine, t_vec3 dest)
{
	t_vec3	vector = (t_vec3){dest.x - origine.x, dest.y - origine.y,
		dest.z - origine.z};
	float	norme = sqrtf((powf(vector.x, 2) + powf(vector.y, 2) + powf(vector.z, 2)));
	return ((t_vec3){vector.x / norme, vector.y / norme, vector.z / norme});
}

float	get_scalaire(t_vec3 vec1, t_vec3 vec2)
{
	float scalaire = vec1.x * vec2.x + vec1.y * vec2.y + vec1.z * vec2.z;

	if (scalaire <= 0.0)
		return (0.0);
	else
		return (scalaire);
}

int	main(void)
{
	t_ambiant_light	*amb_light = ft_calloc(sizeof(t_ambiant_light));
	int	amb_val[3] = {128, 255, 0};
	t_vec3	base_point = {10, 25, 15};
	t_vec3	light_a = {-40.0, 50.0, 0.0};
	t_vec3	dir_light_a = get_dir(base_point, light_a);
	printf("x: %f\ny : %f\nz : %f\n", dir_light_a.x, dir_light_a.y, dir_light_a.z);
	amb_light->r = amb_val[0] / 255.0;
	amb_light->g = amb_val[1] / 255.0;
	amb_light->b = amb_val[2] / 255.0;
	free(amb_light);
	return (0);
}