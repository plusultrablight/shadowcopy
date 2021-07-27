int		ft_str_is_printable(char *str)
{
	int		index;

	index = 0;
	while (str[index])
	{
		if (!(str[index] >= ' ' && str[index] <= '~'))
			return (0);
		index++;
	}
	return (1);
}
