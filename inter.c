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
	size_t	y;
	size_t	x;

	while(av[1][i] && ac == 3)
	{
		y = 0;
		while (av[1][i] != av[2][y] && av[2][y])
			y++;
		if (av[1][i] == av[2][y])
		{
			x = 0;
			while (x < i && av[1][x] == av[1][i])
				x++;
			printf("char %c %c\n", av[1][x], av[1][i]);
			if (av[1][x] != av[1][i])
				write(1, &av[1][i], 1);
		}
		i++;
	}
	return (quit());
}
