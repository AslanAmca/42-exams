void sort_int_tab(int *tab, unsigned int size)
{
	for (unsigned int i = 0; i < size - 1; i++)
	{
		for (unsigned int j = 0; j < size - i - 1; j++)
		{
			if (tab[j] > tab[j + 1])
			{
				unsigned int temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
		}
	}
}
