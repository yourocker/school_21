#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush04(int x, int y)
{
	char a;
	char b;
	char c;
	int i;

	a = 'A';
	b = 'B';
	c = 'C';
	i = 0;
	if (y == 1)
	{
		ft_putchar(a);
		i++;
		while (i < x - 1)
		{
			ft_putchar(b);
			i++;
		}
		ft_putchar(c);
		ft_putchar('\n');
	}
	i = 0;
	while (i < y - 1)
	{
		ft_putchar(a);
		ft_putchar('\n');
		i++;
		while (i < y - 1)
		{
			ft_putchar(b);
			ft_putchar('\n');
			i++;
		}
		ft_putchar(c);
		ft_putchar('\n');
	}
}

int main()
{
	rush04(4, 4);
	return (0);
}
