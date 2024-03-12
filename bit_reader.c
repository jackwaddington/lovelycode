#include <unistd.h>

void print_bits(unsigned char octet)
{
	int	div = 128;
	int num = octet;

	while (div != 0)
	{
		if (div <= num)
		{
			write(1, "1", 1);
			num = num % div;
		}
		else
			write(1, "0", 1);
		div = div / 2;
	}
}

void nl(void)
{
	write(1, "\n", 1);
}

int	main(void)
{
	print_bits(0);
	nl();
	print_bits(1);
	nl();
	print_bits(2);
	nl();
	print_bits(4);
	nl();
	print_bits(4);
	nl();
	print_bits(8);
	nl();
	print_bits(16);
	nl();
	print_bits(32);
	nl();
	print_bits(64);
	nl();
	print_bits(128);
	nl();
	print_bits(255);
	nl();
	return (0);
}

