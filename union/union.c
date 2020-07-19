#include <unistd.h>
#include <stdio.h>

int	quit()
{
	write(1, "\n", 1);
	return (0);
}

int	main(int ac, char **av)
{
	size_t	i = 0;
	size_t	x;

	while (ac == 3 && av[1][i])
	{
		x = 0;
		while (x < i && av[1][x] != av[1][i])
			x++;
		if (i == 0 || av[1][x == i ? x - 1 : x] != av[1][i])
			write(1, &av[1][i], 1);
		i++;
	}
	i = 0;
	while (ac == 3 && av[2][i])
	{
		x = 0;
		while (av[1][x] && av[1][x] != av[2][i])
			x++;
		if (!av[1][x])
		{
			x = 0;
			while (x < i && av[2][x] != av[2][i])
				x++;
			if (i == 0 || av[2][x == i ? x - 1 : x] != av[2][i])
				write(1, &av[2][i], 1);
		}
		i++;
	}
	return (quit());
}
