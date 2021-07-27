void	ft_ultimate_div_mod(int *a, int *b)
{
	int		mark;

	mark = *a / *b;
	*b = *a % *b;
	*a = mark;
}
