#include <stdio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < dstsize - 1 && src[i] != 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ptr;
	size_t amount;

	if (!s)
		return(NULL);
	amount = ft_strlen(s);
	if (start >= amount || len == 0)
		return  (ft_strdup(""));
	if (start + len > amount)
		len =  amount - start;
	ptr = (char *) malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}

static size_t	ft_count_c_in(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
		printf("ft_count_c_in %d\n", i);
	return (i);
}

static size_t	ft_count_strings(char const *s, char c)
{
	size_t	strings;

	strings = 0;
	while (*s)
	{
		if (*s != c)
		{
			s += ft_count_c_in (s, c);
			strings++;
			printf("ft_count_strings %d\n", strings);
		}
		else
			s++;
	}
	return (strings);
}

static char **ft_free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
		printf("ft_free_array %d\n", i);
	}
	free(array);
	return (NULL);
}

static char **ft_write_strings(char **rtn, size_t strings, \
		char const *s, char c)
{
	size_t	string_len;
	size_t	i;

	i = 0;
	while (*s && i < strings)
	{
		if (*s == c)
		{
			s++;
			printf("c is in s %d times\n", i);
		}
		else
		{
			string_len = ft_count_c_in(s, c);
			rtn[i] = ft_substr(s, 0, string_len);
			if (rtn[i] == NULL)
				return (ft_free_array(rtn));
			s += string_len;
			printf("string_len %d\n", string_len);
			i++;
		}
	}
	rtn[i] = NULL;
	return (rtn);
}

char **ft_split(char const *s, char c)
{
	size_t	strings;
	char	**rtn;

	if (!s)
		return (NULL);
	strings = ft_count_strings(s, c);
	rtn = (char **)malloc((strings + 1) * sizeof(*rtn));
	if (!rtn)
		return (NULL);
	return  (ft_write_strings(rtn, strings, s, c));
}

int	main(void)
{
	char string [] = "ac,def,gsshi,s,sjkl";
	char character = ',';

	ft_split(string,character);
}
