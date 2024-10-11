char	*ft_strstr(char *str, char *to_find)
{
	char	*start;
	char	*substr;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		start = str;
		substr = to_find;
		while (*str && *substr && (*str == *substr))
		{
			str++;
			substr++;
		}
		if (*substr == '\0')
		{
			return (start);
		}
		str = start + 1;
	}
	return (0);
}
