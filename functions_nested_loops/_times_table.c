void times_table(void)
{
	int f, c, p = 0;
	
	for (f = 0; f < 10; f++)
	{
		_putchar('0');
		for (c = 0; c < 10; c++)
		{
			_putchar (',');
			_putchar (' ');
			p = f * c;
			if (p < 10)
				_putchar (' ');
			else
			{
				_putchar (p / 10 + '0');
			}
				_putchar (p % 10 + '0');
		}
			_putchar ('\n');
	}
	return;
}
