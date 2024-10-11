#include <unistd.h>
int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}

	if (ft_strlen(argv[2]) != 1 || ft_strlen(argv[3]) != 1)
	{
		write(1, "\n", 1);
			return(0);
	}

	char tr = argv[2][0];
	char rw = argv[3][0];
	char *str = argv[1];
	int i = 0;

	while(str[i] != '\0')
	{
		if(str[i] == tr)
			write(1, &rw, 1);
		else
			write(1, &str[i], 1);
		i++;
	}

	write(1, "\n", 1);
	return (0);
}


}
