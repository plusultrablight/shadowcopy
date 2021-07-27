void	ft_sort_int_tab(int *tab, int size)
{
	int	mark;
	int	a;
	int	z;

	a = 1;
	while (a < size)
	{
		mark = tab[a];
		z = a - 1;
		while (z >= 0 && tab[z] > mark)
		{
			tab[z + 1] = tab[z];
			z--;
		}
		tab[z + 1] = mark;
		a++;
	}
}
