#include <unistd.h>

void	ft_putstr(char *str)
{
	int		lenght;

	lenght = 0;
	while (str[lenght])
	{
		lenght++;
	}
	write(1, str, lenght);
}
