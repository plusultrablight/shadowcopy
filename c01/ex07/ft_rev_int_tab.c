void	swap(int *a, int *b)
{
	int	placeholder;

	placeholder = *a;
	*a = *b;
	*b = placeholder;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int		low;
	int		high;

	low = 0;
	high = size - 1;
	while (low <= high)
	{
		swap(&tab[low], &tab[high]);
		low++;
		high--;
	}
}
