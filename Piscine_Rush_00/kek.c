#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void h(int x, char a, char b, char c)
{
	if (x-- >= 1)
	{
		ft_putchar(a);
		while (x-- >= 2)
			ft_putchar(b);
		if (x == 0)
			ft_putchar(c);
		ft_putchar('\n');
	}
}

void v(int x, int y, char d)
{
	int i;

	while (y-- >2)
	{
		ft_putchar(d);
		i =2;
		while(x > i++)
			ft_putchar(' ');
			ft_putchar(d);
			ft_putchar('\n');
	}
}

void	rush04(int x, int y)
{
	if (y >= 1)
		h(x, 'A', 'B', 'C');
		v(x, y, 'B');
	if (y >= 2)
		h(x, 'C', 'B', 'A');
}

int main()
{
	rush04(1, 5);
	return (0);
}
