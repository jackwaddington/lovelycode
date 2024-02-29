#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
	ft_putchar('\n');
}

int	ft_strlen(char *s)
{
	char *cp = s;

	while(*cp)
		cp++;

	return(cp - s);
}


void	show_centre(char s[])
{
	int i = ft_strlen(s);
	printf("str len is %d\n", i);
	s[i / 2] = 'X';
	if(i % 2 == 0)
	{
		printf("EQUAL NUMBERS NEED TWO CENTRE POINTS\n");
		s[(i/2)-1] = 'X';
	}	
}

int	main(int argc, char **argv)
{
	int i;

	i = 0;
// check inputs
	if(argc > 2 || argc < 2)
	{
		printf("This program takes in one argument string and return an edited string.");
		return(-1);
	}
// display inputs
	printf("*** I N P U T S ***\n\n");
	printf("argc is %d\n\narguments are:\n", argc);
	while (i < argc)
	{
		printf("\n%d\n", i);
		ft_putstr(argv[i]);
		i++;	
	}
	i = 1;
// manipulate input, using string[]
	printf("\n** M A N I P U L A T I O N **\n\n");
	show_centre(argv[i]);	
	ft_putstr(argv[i]);
}
