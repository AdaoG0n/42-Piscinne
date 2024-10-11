void	ft_ultimate_div_mod(int *a, int *b)
{
	int	swap;

	swap = *a / *b;
	*b = *a % *b;
	*a = swap;
}
