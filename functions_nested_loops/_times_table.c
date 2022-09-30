void times_table(void)
{
	int f = 0;
	int c = 0;
	int i = 0;

	for (f = 0; f < 10; f++)
	{
		for (c = 0; c < 9; c++)
		{
			if (c * i >= 10)
			{
				_putchar((c * i) / 10 + '0');
				_putchar((c * i) % 10 + '0');
			}
			else
			{
				_putchar(c * i + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
		if (c * i >= 10)
		{
			_putchar((c * i) / 10 + '0');
			_putchar((c * i) % 10 + '0');
		}
		else
		{
			_putchar(c * i + '0');
		}
		i++;
		_putchar('\n');
	}
}
