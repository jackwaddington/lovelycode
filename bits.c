#include <unistd.h>
#include <stdio.h>

unsigned char something(unsigned char octet)
{
	int r = 0;
	int bit_len = 8;

	while(bit_len--)
	{
		octet = octet << 1;
	}
	return octet;
}

unsigned char left(unsigned char octet)
{
	return(octet << 1);
}

unsigned char right(unsigned char octet)
{
	return (octet >> 1);
}

unsigned char up(unsigned char octet)
{
	return (octet ^ octet);
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
	write(1, "\n", 1);
}


int	main(void)
{
	unsigned char o = 12;

	printer(o);
	printer(something(o));
	printer(left(o));
	printer(right(o));
	printer(up(o));

	write(1, "\n", 1);


	unsigned char a = 5, b = 9;
	printf("a = %d, b = %d\n", a, b);
	printer(a); printer(b);
	printf("a&b = %d\n", a & b);
	printer(a & b);
	printf("a | b = %d\n", a | b);
	printer(a | b);
	printf("a^b = %d\n", a ^ b);
	printer(a ^ b);
	printf("~a = %d\n", a = ~a);
	printer(a = ~a);
	printf("b<<1 = %d\n", b << 1);
	printer(b << 1);
	printf("b>>1 = %d\n",b >> 1);
	printer(b >> 1);

}
