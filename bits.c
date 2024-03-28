#include <unistd.h>

unsigned char something(unsigned char octet)
{
	int r = 0;
	int bit_len = 8;

	while(len--)
	{
		void;
	}

}


void	printer(unsigned char octet)
{
	int div = 128;
	int	oct = octet;

	while(div != 0)
	{
		if(oct >= div)
		{
			write(1, "1", 1);
			oct = oct % div;
		}
		else
			write(1, "0", 1);
		div = div / 2;
	}
}


int	main(void)
{
	unsigned char o = 12;

	printer(o);
}
