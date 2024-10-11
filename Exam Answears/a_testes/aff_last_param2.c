#include<unistd.h>
int	main(int argc, char **argv)
{
	if(argc > 1)
	{
		char *last_param = argv[argc - 1];
		while (*last_param)
		{
			write(1, last_param, 1);
			last_param++;
		}
	}
		write(1, "\n", 1);
		return (0);
}
