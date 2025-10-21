#include "minirt.h"

t_bool	filename_is_rt(char *name)
{
	while (*name)
		name++;
	name -= 3;
	if (name[0] == '.' && name[1] == 'r' && name[2] == 't')
		return (TRUE);
	return (FALSE);
}
