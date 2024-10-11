char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first_word;

	i = 0;
	first_word = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (first_word && str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			else if (!first_word && str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			first_word = 0;
		}
		else
		{
			first_word = 1;
		}
		i++;
	}
	return (str);
}
