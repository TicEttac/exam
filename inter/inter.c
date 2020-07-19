#include <unistd.h>

int	quit()
{
	write(1, "\n", 1);
	return (0);
}

int	main(int ac, char **av)
{
	size_t	i = 0;
	size_t	y;
	size_t	x;

	while(ac == 3 && av[1][i])
	{
		y = 0;
		while (av[1][i] != av[2][y] && av[2][y])
			y++;
		if (av[1][i] == av[2][y])
		{
			x = 0;
			while (x < i && av[1][x] != av[1][i])
				x++;
			if (av[1][x == i ? x - 1 : x] != av[1][i] || i == 0)
				write(1, &av[1][i], 1);
		}
		i++;
	}
	return (quit());
}
